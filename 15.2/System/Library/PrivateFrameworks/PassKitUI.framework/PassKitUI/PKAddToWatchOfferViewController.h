@class PKAddToWatchOfferView, UIView, PKPaymentPass;
@protocol PKAddToWatchOfferViewControllerDelegate;

@interface PKAddToWatchOfferViewController : UIViewController {
    UIView *_interactionDisabledView;
}

@property (weak, nonatomic) id<PKAddToWatchOfferViewControllerDelegate> delegate;
@property (readonly, retain, nonatomic) PKPaymentPass *pass;
@property (nonatomic) long long context;
@property (readonly, nonatomic) PKAddToWatchOfferView *offerView;

- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (unsigned long long)edgesForExtendedLayout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)showSpinner:(BOOL)a0;
- (id)initWithPass:(id)a0 context:(long long)a1 delegate:(id)a2;
- (void)_configureNavigationItem;
- (void)_clearInteractionDisabledView;
- (void)_addLater;
- (void)_addToWatch;
- (void)_setIdleTimerDisabled:(BOOL)a0;

@end
