@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {
    UIAlertController *_alertController;
}

@property (readonly, retain, nonatomic) UIAlertController *alertController;

- (void)presentAlertController:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)_presentationViewController;
- (id)initWithWindowScene:(id)a0;

@end
