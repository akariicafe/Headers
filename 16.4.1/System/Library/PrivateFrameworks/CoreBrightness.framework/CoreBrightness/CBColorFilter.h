@class NSString, CBColorSample, NSMutableArray;

@interface CBColorFilter : CBModule <CBHIDServiceProtocol> {
    NSMutableArray *_services;
    NSMutableArray *_validServices;
}

@property (nonatomic) unsigned long long sensorPolicy;
@property (nonatomic) unsigned long long mode;
@property (readonly) CBColorSample *sample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateCCTForChromaticity:(struct { double x0; double x1; })a0;
+ (double)calculateCCTForTristimulus:(struct { double x0; double x1; double x2; })a0;
+ (struct { double x0; double x1; double x2; })calculateTristimulusForChromaticity:(struct { double x0; double x1; })a0 andLux:(double)a1;

- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)registerNotificationBlock:(id /* block */)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)dealloc;
- (void)unregisterNotificationBlock;
- (id)initWithQueue:(id)a0;
- (BOOL)ALSServiceConformsToPolicy:(id)a0;
- (id)newColorSampleConditionWeighted;
- (unsigned long long)evaluatedFilterMode;
- (BOOL)forceSampleUpdate;
- (BOOL)hasExtFrontSensor;
- (BOOL)hasExtRearSensor;
- (id)newColorSampleLinearWeightedForSamples:(id)a0;
- (id)newColorSampleLinearWeightedForServices:(id)a0;
- (id)newColorSampleLogWeighted;
- (id)newColorSampleLogWeightedForSamples:(id)a0;
- (id)newColorSampleWinnerTakesAll;
- (void)reportSampleUpdate;
- (void)updateSample;
- (void)updateValidServices;

@end
