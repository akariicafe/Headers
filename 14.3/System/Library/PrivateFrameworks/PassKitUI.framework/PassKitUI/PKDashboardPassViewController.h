@class PKPaymentPass, NSString, PKPass, _PKUIKVisibilityBackdropView, UIButton, NSObject, BKPresenceDetectOperation, PKDashboardPaymentTransactionItemPresenter, PKDashboardPassFlowLayout;
@protocol PKDashboardDelegate, PKDashboardPassViewControllerDelegate, OS_dispatch_source;

@interface PKDashboardPassViewController : PKDashboardViewController <PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, BKOperationDelegate> {
    BOOL _fingerPresent;
    BKPresenceDetectOperation *_fingerDetectionOperation;
    NSObject<OS_dispatch_source> *_fingerTimer;
    BOOL _invalidated;
    struct { BOOL foreground; BOOL foregroundActive; } _foregroundActiveState;
    unsigned char _visibility;
    BOOL _footerVisible;
    PKPaymentPass *_frontmostPaymentPass;
    _PKUIKVisibilityBackdropView *_footerBackground;
    struct CGSize { double width; double height; } _defaultPasscodeButtonSize;
    UIButton *_passcodeButton;
}

@property (weak, nonatomic) id<PKDashboardPassViewControllerDelegate, PKDashboardDelegate> delegate;
@property (retain, nonatomic) PKPass *frontmostPass;
@property (readonly, nonatomic) PKDashboardPassFlowLayout *passFlowLayout;
@property (readonly, nonatomic) PKDashboardPaymentTransactionItemPresenter *transactionPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)dataSource:(id *)a0 presenters:(id *)a1 forGroupView:(id)a2 context:(id)a3 presentingViewController:(id)a4;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 presenters:(id)a1 layout:(id)a2;
- (void)_createFooter;
- (void)_visibilityDidChange;
- (void)_updateFingerDetection;
- (void)_updateFooterAnimated:(BOOL)a0;
- (void)_updatePasscodeButtonTitle;
- (void)_passcodeTapped:(id)a0;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)operation:(id)a0 presenceStateChanged:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidDisappear:(BOOL)a0;
- (void)invalidate;
- (id)initWithPass:(id)a0;
- (void)viewWillLayoutSubviews;

@end
