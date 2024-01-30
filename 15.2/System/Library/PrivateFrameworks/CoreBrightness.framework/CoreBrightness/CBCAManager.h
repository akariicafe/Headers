@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface CBCAManager : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSMutableArray *_displays;
    float _currentlySetMatrix[9];
    float _currentlySetScaler;
    float _digitalDimmingBrightnessScaler;
}

- (void)updateDigitalDimmingBrightnessScaler:(id)a0;
- (id)initWithCADisplay:(id)a0;
- (void)nitsThresholdPLCPropertyHandler:(id)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)displayBrightnessPropertyHandler:(id)a0;
- (void)dealloc;
- (void)colorRampPropertyHandler:(id)a0;

@end
