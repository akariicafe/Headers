@class NSString, NSMutableArray;

@interface CBAODThresholdModule : CBModule <CBHIDServiceProtocol> {
    float _minNits;
    float _maxNits;
    float _Pthreshold_dim;
    float _Pthreshold_dim_lowLux;
    float _Pthreshold_brighten;
    float _Pthreshold_brighten_lowLux;
    float _AP_Pthreshold_dim;
    float _AP_Pthreshold_brighten;
    BOOL _brightenLuxThresholdOverriden;
    BOOL _dimLuxThresholdOverriden;
    float _currentBrightness;
    float _currentLux;
    float _currentBrightnessLimit;
    NSMutableArray *_alsServiceClients;
}

@property float brightenLuxThreshold;
@property float dimLuxThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyPropertyForKey:(id)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)checkBootArgsConfiguration;
- (void)dealloc;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)initWithQueue:(id)a0;
- (id)copyPdeltaThresholdsForLux:(float)a0;
- (void)reevaluateALSThresholds;
- (BOOL)thresholdsCrossedForLux:(float)a0;
- (void)updateALSThresholdsWithBrightness:(float)a0 brightnessLimit:(float)a1 lux:(float)a2;

@end
