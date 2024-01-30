@class _UIPortalView, UIView;

@interface SBSystemApertureCurtainViewController : UIViewController <SBSystemApertureCurtainViewHoster> {
    UIView *_curtainView;
    _UIPortalView *_indicatorPortalView;
}

@property (retain, nonatomic) UIView *curtainView;
@property (weak, nonatomic) UIView *indicatorSourceView;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_indicatorPortalView;

@end
