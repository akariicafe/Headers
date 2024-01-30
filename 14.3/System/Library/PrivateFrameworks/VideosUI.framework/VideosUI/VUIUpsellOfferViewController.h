@class IKViewElement, UIScrollView, VUIUpsellOfferView, VUIUpsellOfferTransactionView;

@interface VUIUpsellOfferViewController : _TVBgImageLoadingViewController

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIUpsellOfferView *upsellView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) VUIUpsellOfferTransactionView *transactionView;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)updateWithViewElement:(id)a0;
- (long long)_overrideLargeTitleDisplayMode;
- (void)_iOS_updateViews;

@end
