@class NSTimer, NSValue, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {
    NSTimer *_HUDPopTimer;
    NSValue *_pointerLocation;
    _UIKeyCommandDiscoverabilityHUDWindow *_window;
    BOOL _commandKeyIsDown;
}

+ (void)dismissHUD;
+ (void)clearHUDPopTimer;
+ (id)sharedKeyCommandDiscoverabilityHUD;

- (BOOL)_HUDAllowedForWindow:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_performableKeyCommandsWithResponder:(id)a0;
- (void)handlePhysicalKeyboardEvent:(id)a0;
- (void)_applicationWillResignActive;
- (void)_presentHUDWithKeyCommands:(id)a0;
- (void)_scheduleHUDPresentation;
- (void)_clearHUDPopTimer;
- (void)_dismissHUD;
- (void)_HUDPopTimerFired:(id)a0;
- (void)_didTakeScreenshot;

@end
