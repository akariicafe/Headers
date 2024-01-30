@class NSString, NSArray;

@interface AXSSInterDeviceSwitchEvent : NSObject

@property (copy, nonatomic) NSString *switchIdentifier;
@property (copy, nonatomic) NSString *switchDisplayName;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) NSArray *longPressActions;
@property (nonatomic) BOOL isDown;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithSwitchIdentifier:(id)a0 switchDisplayName:(id)a1 deviceIdentifier:(id)a2 actions:(id)a3 longPressActions:(id)a4 isDown:(BOOL)a5;
- (id)initWithSwitchIdentifier:(id)a0 switchDisplayName:(id)a1 deviceIdentifier:(id)a2 actions:(id)a3 isDown:(BOOL)a4;

@end
