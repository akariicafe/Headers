@class NSMutableArray;

@interface CBCAManager : CBModule {
    NSMutableArray *_displays;
    float _currentlySetMatrix[9];
    float _currentlySetScaler;
    float _digitalDimmingBrightnessScaler;
}

- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)updateDigitalDimmingBrightnessScaler:(id)a0;
- (void)displayBrightnessPropertyHandler:(id)a0;
- (void)nitsThresholdPLCPropertyHandler:(id)a0;
- (void)dealloc;
- (void)colorRampPropertyHandler:(id)a0;
- (void)sendNotificationForKey:(id)a0 andValue:(id)a1;
- (id)initWithCADisplay:(id)a0 andQueue:(id)a1;

@end
