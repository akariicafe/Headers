@class NSArray, UIActivityIndicatorView;

@interface AAUIContactSetupNavigationController : UINavigationController {
    UIActivityIndicatorView *_activityIndicatorView;
    NSArray *_currentRightBarButtonItems;
}

- (void).cxx_destruct;
- (void)showActivityIndicator;
- (void)hideActivityIndicator;

@end
