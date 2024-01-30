@class UIView, VUIAppSpinnerView;

@interface VUIAppLoadingViewController : UIViewController {
    VUIAppSpinnerView *_loadingView;
    UIView *_parentView;
    UIView *_principalView;
    BOOL _cancelLoading;
}

@property (nonatomic) BOOL loading;

- (void)setView:(id)a0;
- (void).cxx_destruct;

@end
