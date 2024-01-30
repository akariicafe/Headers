@class UIScrollView, UIImageView;

@interface SBSetupRegulatoryInfoViewController : UIViewController {
    UIScrollView *_containerView;
    UIImageView *_regulatoryImageView;
}

- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;

@end
