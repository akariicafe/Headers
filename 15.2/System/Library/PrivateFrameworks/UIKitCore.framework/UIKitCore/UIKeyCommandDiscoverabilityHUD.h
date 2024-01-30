@class NSTimer, NSValue, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {
    NSTimer *_HUDPopTimer;
    NSValue *_pointerLocation;
    _UIKeyCommandDiscoverabilityHUDWindow *_window;
    BOOL _commandKeyIsDown;
}

+ (void)clearHUDPopTimer;
+ (id)sharedKeyCommandDiscoverabilityHUD;
+ (void)dismissHUD;

- (void)_presentHUDWithKeyCommands:(id)a0;
- (void)_didTakeScreenshot;
- (BOOL)_HUDAllowedForWindow:(id)a0;
- (void)_scheduleHUDPresentation;
- (void).cxx_destruct;
- (void)_applicationWillResignActive;
- (void)handlePhysicalKeyboardEvent:(id)a0;
- (void)_clearHUDPopTimer;
- (void)_HUDPopTimerFired:(id)a0;
- (void)dealloc;
- (id)_performableKeyCommandsWithResponder:(id)a0;
- (void)_dismissHUD;

@end
