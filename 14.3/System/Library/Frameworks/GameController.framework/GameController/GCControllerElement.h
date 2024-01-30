@class NSString, NSMutableSet, GCController;

@interface GCControllerElement : NSObject

@property (weak, nonatomic) GCController *controller;
@property (weak, nonatomic) GCControllerElement *collection;
@property BOOL updatePending;
@property float pendingValue;
@property (retain, nonatomic) NSMutableSet *aliases;
@property (retain, nonatomic) NSString *primaryAlias;
@property (nonatomic) float deadzone;
@property (nonatomic) BOOL remappable;
@property (nonatomic) int remappingKey;
@property (nonatomic) BOOL mappableToSystemGestures;
@property (nonatomic, getter=isBoundToSystemGesture) BOOL boundToSystemGesture;
@property (readonly, nonatomic, getter=isAnalog) BOOL analog;
@property (nonatomic) long long preferredSystemGestureState;
@property (retain, nonatomic) NSString *sfSymbolsName;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *unmappedSfSymbolsName;
@property (retain, nonatomic) NSString *unmappedLocalizedName;

- (id)init;
- (void).cxx_destruct;
- (float)value;
- (unsigned long long)hash;
- (BOOL)_setValue:(float)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (int)getAndResetTimesPressed;
- (BOOL)_commitPendingValueOnQueue:(id)a0;
- (void)_setPendingValue:(float)a0;
- (void)_resetPendingValue;
- (BOOL)_setPendingValueIfChanged:(float)a0;

@end
