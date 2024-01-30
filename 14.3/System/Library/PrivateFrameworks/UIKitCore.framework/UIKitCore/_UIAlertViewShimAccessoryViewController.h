@class UIViewController;

@interface _UIAlertViewShimAccessoryViewController : UIViewController {
    UIViewController *_accessoryViewController;
    double _preferredHeight;
}

- (void).cxx_destruct;
- (id)initWithAccessoryViewController:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;

@end
