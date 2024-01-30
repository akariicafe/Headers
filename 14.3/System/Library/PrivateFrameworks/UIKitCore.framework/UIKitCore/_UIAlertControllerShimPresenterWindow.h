@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {
    UIAlertController *_alertController;
}

@property (readonly, retain, nonatomic) UIAlertController *alertController;

- (id)init;
- (void).cxx_destruct;
- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (id)initWithWindowScene:(id)a0;
- (id)_presentationViewController;

@end
