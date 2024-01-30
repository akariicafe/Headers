@class _SFBrowserContentViewController, NSTimer, NSMutableArray, UIViewController;

@interface _SFUnresponsiveWebProcessController : NSObject {
    NSTimer *_webProcessWatchdogTimer;
    NSMutableArray *_tapToRadarRecords;
    _SFBrowserContentViewController *_contentViewController;
}

@property (nonatomic) BOOL shouldIgnoreDidBecomeResponsive;
@property (readonly, nonatomic) BOOL supportsTapToRadar;
@property (weak, nonatomic) UIViewController *activeBrowserContentViewController;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_webProcessWatchdogTimerFired:(id)a0;
- (void)_promptTapToRadar:(id /* block */)a0;
- (void)unscheduleWatchdogTimer;
- (void)scheduleWatchdogTimerForContentViewController:(id)a0;
- (void)recordURLForTapToRadar:(id)a0 hostAppIdentifier:(id)a1;
- (void)_tapToRadar;

@end
