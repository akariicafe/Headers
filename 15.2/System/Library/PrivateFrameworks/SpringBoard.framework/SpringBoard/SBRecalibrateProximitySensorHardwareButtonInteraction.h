@class NSString, SBProximitySensorManager;

@interface SBRecalibrateProximitySensorHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction>

@property (retain, nonatomic) SBProximitySensorManager *sensorManager;
@property (nonatomic) BOOL didResetProxCalibration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithProximitySensorManager:(id)a0;
- (BOOL)disallowsDoublePressForReason:(id *)a0;
- (BOOL)disallowsSinglePressForReason:(id *)a0;
- (id)hardwareButtonGestureParameters;
- (BOOL)_disallowsAnyPressForReason:(id *)a0;
- (void).cxx_destruct;
- (BOOL)disallowsTriplePressForReason:(id *)a0;
- (BOOL)disallowsLongPressForReason:(id *)a0;
- (BOOL)consumeInitialPressDown;
- (BOOL)consumeSinglePressUp;

@end
