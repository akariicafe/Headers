@class UIWindow, NSString, UIAlertController, NSProgress, NSTimer, _UIProgressView, UIWindowScene;

@interface _UIApplicationModalProgressController : NSObject {
    BOOL _disableButtonAction;
    _UIProgressView *_progressView;
    UIWindowScene *_weakScene;
}

@property (retain, nonatomic, getter=_window, setter=_setWindow:) UIWindow *window;
@property (retain, nonatomic, getter=_alertController, setter=_setAlertController:) UIAlertController *alertController;
@property (copy, nonatomic, getter=_dismissalHandler, setter=_setDismissalHandler:) id /* block */ dismissalHandler;
@property (copy, nonatomic, getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:) id /* block */ preDisplayTestBlock;
@property (retain, nonatomic, getter=_progress, setter=_setProgress:) NSProgress *progress;
@property (retain, nonatomic, getter=_showTimer, setter=_setShowTimer:) NSTimer *showTimer;
@property (retain, nonatomic, getter=_hideTimer, setter=_setHideTimer:) NSTimer *hideTimer;
@property (nonatomic, getter=_displayStartTime, setter=_setDisplayStartTime:) double displayStartTime;
@property (retain, nonatomic) NSProgress *urlProgress;
@property (nonatomic) double displayDelaySeconds;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

+ (id)sharedInstance;
+ (id)instanceForScene:(id)a0;

- (void)_reset;
- (id)init;
- (void).cxx_destruct;
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(BOOL)a0;
- (void)_dismissButtonAction:(id)a0;
- (void)_hideImmediatelyWasDismissedByUser:(BOOL)a0;
- (void)_hideTimerAction:(id)a0;
- (void)_showTimerAction:(id)a0;
- (void)displayForCopyingFileAtURL:(id)a0 toURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)displayForDownloadingURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)displayForDownloadingURL:(id)a0 copyToURL:(id)a1 completionHandler:(id /* block */)a2;
- (void)displayWithTitle:(id)a0 message:(id)a1 progress:(id)a2 buttonTitle:(id)a3 preDisplayTestBlock:(id /* block */)a4 dismissalHandler:(id /* block */)a5;
- (void)hideAfterDelay:(double)a0 forceCompletion:(BOOL)a1 replacementDismissalHandler:(id /* block */)a2;
- (void)hideAfterMinimumUptimeWithDismissalHandler:(id /* block */)a0;
- (void)reconfigureWithTitle:(id)a0 message:(id)a1 progress:(id)a2 buttonTitle:(id)a3 dismissalHandler:(id /* block */)a4;

@end
