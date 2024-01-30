@class NSString, NSMutableSet;
@protocol GCDevice;

@interface GCControllerElement : NSObject

@property (weak, nonatomic) id<GCDevice> device;
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
@property (retain, nonatomic) NSString *unmappedNameLocalizationKey;
@property (retain, nonatomic) NSString *nameLocalizationKey;
@property (readonly, nonatomic, getter=isAnalog) BOOL analog;
@property (nonatomic) long long preferredSystemGestureState;
@property (retain, nonatomic) NSString *sfSymbolsName;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *unmappedSfSymbolsName;
@property (retain, nonatomic) NSString *unmappedLocalizedName;

- (BOOL)_setValue:(float)a0;
- (float)value;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_commitPendingValueOnQueue:(id)a0;
- (void)_resetPendingValue;
- (void)_setPendingValue:(float)a0;
- (BOOL)_setPendingValueIfChanged:(float)a0;
- (BOOL)_setValue:(float)a0 queue:(id)a1;
- (int)getAndResetTimesPressed;

@end
