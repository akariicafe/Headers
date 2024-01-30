@class UIWindow, NSString, UIAlertController, NSDate;

@interface PXProgressIndicatorAlertController : NSObject <PXMutableProgressIndicatorAlertController> {
    BOOL _isCanceled;
    NSDate *_alertPresentedDate;
    UIAlertController *_alertController;
    UIWindow *_window;
}

@property (nonatomic) double delay;
@property (nonatomic) double minimumDisplayDuration;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isInternalUIAllowed;
@property (copy, nonatomic) NSString *label;

+ (id)beginShowingModalProgressWithConfiguration:(id /* block */)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_dismissAlert:(id /* block */)a0;
- (void)_presentAlert;
- (void)_startShowingProgress;
- (void)stopShowing;
- (void)stopShowing:(id /* block */)a0;

@end
