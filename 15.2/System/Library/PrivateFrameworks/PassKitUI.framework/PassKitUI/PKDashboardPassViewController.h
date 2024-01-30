@class PKPass, NSString, PKPaymentPass, _PKUIKVisibilityBackdropView, UIButton, NSObject, NSMutableArray, BKPresenceDetectOperation, PKDashboardPaymentTransactionItemPresenter, PKDashboardPassFlowLayout;
@protocol OS_dispatch_queue, PKDashboardPassViewControllerDelegate, PKDashboardDelegate, OS_dispatch_source;

@interface PKDashboardPassViewController : PKDashboardViewController <PKForegroundActiveArbiterObserver, _PKUIKVisibilityBackdropViewDelegate, PKDashboardPassTilesItemPresenterDelegate, BKOperationDelegate, PKInvalidatable> {
    BOOL _fingerPresent;
    BKPresenceDetectOperation *_fingerDetectionOperation;
    NSObject<OS_dispatch_source> *_fingerTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic BOOL _invalidated;
    NSMutableArray *_sessionHandles;
    struct { BOOL foreground; BOOL foregroundActive; } _foregroundActiveState;
    unsigned int _deactivationReasons;
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
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (void)operation:(id)a0 presenceStateChanged:(BOOL)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)initWithPass:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_isBackgrounded;
- (void)traitCollectionDidChange:(id)a0;
- (void)invalidate;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_updateFooterAnimated:(BOOL)a0;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;
- (id)initWithPassGroupView:(id)a0 context:(id)a1 presentingViewController:(id)a2;
- (id)initWithDataSource:(id)a0 presenters:(id)a1 layout:(id)a2;
- (void)_createFooter;
- (void)_visibilityDidChange;
- (void)_updateDefaultPasscodeButtonSize;
- (void)_updateFingerDetection;
- (BOOL)_isForegroundActive;
- (void)_updatePasscodeButtonTitle;
- (id)_passcodeButtonTitle;
- (void)_passcodeTapped:(id)a0;
- (void)_performActivationStateUpdate:(id /* block */)a0;
- (BOOL)_isDeactivated;
- (void)passTilesItemPresenter:(id)a0 executeSEActionForPass:(id)a1 tile:(id)a2 withCompletion:(id /* block */)a3;
- (void)foregroundActiveArbiter:(id)a0 didUpdateDeactivationReasons:(unsigned int)a1;

@end
