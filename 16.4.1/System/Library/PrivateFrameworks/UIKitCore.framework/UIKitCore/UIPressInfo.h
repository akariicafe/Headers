@class UIKey;

@interface UIPressInfo : NSObject

@property (nonatomic) double timestamp;
@property (nonatomic) long long phase;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long gameControllerComponent;
@property (nonatomic) double force;
@property (nonatomic) unsigned long long clickCount;
@property (nonatomic, getter=isLongClick) BOOL longClick;
@property (nonatomic) unsigned int contextID;
@property (retain, nonatomic) UIKey *key;
@property (nonatomic) long long modifierFlags;

+ (id)_keyboardPressInfoForType:(long long)a0 isKeyDown:(BOOL)a1 timestamp:(double)a2 contextID:(unsigned int)a3 modifierFlags:(long long)a4;

- (id)init;
- (id)description;
- (id)_sourceDescription;
- (void).cxx_destruct;

@end
