@class NSString, NSProgress, PUAssetPickerActivityProgressViewController, UIAlertController, UIView;

@interface PUAssetPickerActivityProgressController : NSObject {
    PUAssetPickerActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
    UIView *_containerView;
    UIView *_progressContainerView;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL isShowing;

- (id)init;
- (void).cxx_destruct;
- (void)_setupAlertController;
- (void)showAnimated:(BOOL)a0 sourceViewController:(id)a1;
- (void)hideAnimated:(BOOL)a0;

@end
