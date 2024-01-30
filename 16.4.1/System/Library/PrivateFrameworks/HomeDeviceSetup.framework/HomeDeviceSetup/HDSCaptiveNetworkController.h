@interface HDSCaptiveNetworkController : NSObject

+ (id)sharedInstance;

- (void)_activate;
- (void)handleCaptiveCancel;
- (void)handleCaptiveDetected:(id)a0;

@end
