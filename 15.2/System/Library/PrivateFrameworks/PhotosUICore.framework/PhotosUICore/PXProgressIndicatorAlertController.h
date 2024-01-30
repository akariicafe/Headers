@class UIAlertController, UIWindow, NSDate;

@interface PXProgressIndicatorAlertController : NSObject {
    BOOL _isCanceled;
    UIAlertController *_alertController;
    UIWindow *_window;
    NSDate *_alertPresentedDate;
}

@property (nonatomic) double delay;

+ (id)beginShowingModalProgressWithDelay:(double)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stopShowing;
- (void)_startShowingProgress;
- (void)_presentAlert;
- (void)_dismissAlert;

@end
