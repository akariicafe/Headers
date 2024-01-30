@class UIWindow, NSString, NSProgress, PUActivityProgressViewController, UIAlertController, UIView;

@interface PUActivityProgressController : NSObject {
    PUActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
    UIView *_containerView;
    UIView *_dimmingView;
    UIView *_progressContainerView;
    double _whenDidShow;
    BOOL _didShow;
    BOOL _didHide;
}

@property (copy, nonatomic) NSString *title;
@property (weak, nonatomic) UIWindow *window;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

- (void)setFractionCompleted:(double)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateFractionCompletedFromProgress;
- (id)_newProgressContainerView;
- (void)showAnimated:(BOOL)a0 allowDelay:(BOOL)a1;
- (void)hideAnimated:(BOOL)a0 allowDelay:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
