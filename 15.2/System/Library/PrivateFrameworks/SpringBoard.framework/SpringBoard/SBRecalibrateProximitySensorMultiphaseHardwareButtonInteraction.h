@class BSTimer, NSString, SBProximitySensorManager;

@interface SBRecalibrateProximitySensorMultiphaseHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBProximitySensorManagerObserver, SBHardwareButtonInteraction>

@property (nonatomic) long long phase;
@property (retain, nonatomic) SBProximitySensorManager *sensorManager;
@property (retain, nonatomic) BSTimer *timer;
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
- (void)dealloc;
- (BOOL)consumeInitialPressDown;
- (BOOL)consumeSinglePressUp;
- (void)_timerDidFire;
- (void)proximitySensorManager:(id)a0 objectWithinProximityDidChange:(BOOL)a1;
- (void)_transitionToPhase:(long long)a0 timeout:(double)a1;
- (void)_transitionToPhase:(long long)a0;

@end
