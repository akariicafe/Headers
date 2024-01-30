@class NSString, CBDisplayModule, CBABCurve, CBABRamp, NSMutableArray;

@interface CBABModuleExternal : CBModule <CBContainerModuleProtocol, CBHIDServiceProtocol> {
    NSMutableArray *_ALSServices;
    NSString *_containerID;
    NSString *_uniqueID;
    NSString *_displayUUID;
    BOOL _enabled;
    BOOL _available;
    BOOL _presetDisableAB;
    CBABCurve *_curve;
    CBABRamp *_ramp;
    BOOL _updatesFrozen;
    BOOL _suspendAutoBrightness;
    BOOL _fastRamp;
    BOOL _builtIn;
}

@property (readonly) CBDisplayModule *displayModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAvailability;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)setPropertyInternal:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)stop;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)start;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)updateAutoBrightnessState:(BOOL)a0;
- (void)userBrightnessCommitHandler;
- (void)userBrightnessChangingHandler;
- (void)updateBrightnessForce:(BOOL)a0 periodOverride:(BOOL)a1 period:(float)a2;
- (void)storeCurveToPreferences;
- (BOOL)getAggregatedLux:(float *)a0;
- (void)endFastRamp;
- (BOOL)newALSService:(struct __IOHIDServiceClient { } *)a0;
- (void)updateBrightness;

@end
