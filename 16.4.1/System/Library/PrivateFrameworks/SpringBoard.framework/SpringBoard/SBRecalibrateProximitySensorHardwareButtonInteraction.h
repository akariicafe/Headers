@class NSString, SBProximitySensorManager;

@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction>

@property (retain, nonatomic) SBProximitySensorManager *sensorManager;
@property (nonatomic) BOOL didResetProxCalibration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProximitySensorManager:(id)a0;
- (BOOL)disallowsSinglePressForReason:(id *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)consumeInitialPressDown;
- (id)hardwareButtonGestureParameters;
- (BOOL)disallowsTriplePressForReason:(id *)a0;
- (BOOL)disallowsDoublePressForReason:(id *)a0;
- (BOOL)consumeSinglePressUp;
- (BOOL)disallowsLongPressForReason:(id *)a0;
- (BOOL)_disallowsAnyPressForReason:(id *)a0;
- (void).cxx_destruct;

@end
