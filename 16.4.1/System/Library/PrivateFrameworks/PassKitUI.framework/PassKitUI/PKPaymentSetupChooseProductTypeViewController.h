@class UILabel, NSString, PKPaymentProvisioningController, UIImage, PKPaymentProvisioningMethodMetadata, UIImageView, PKPaymentSetupProduct, PKPaymentSetupChooseProductListSectionController, PKAnimatedNavigationBarTitleView, PKPaymentSetupCardImageHeaderView, PKPaymentSetupFlowController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupChooseProductTypeViewController : PKDynamicCollectionViewController <PKViewControllerPreflightable, PKPaymentSetupChooseProductListSectionControllerDelegate> {
    BOOL _snapshotNeedsCorners;
    unsigned char _visibility;
    PKPaymentSetupCardImageHeaderView *_headerView;
    PKPaymentSetupFlowController *_flowController;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
    UIImageView *_passView;
    UILabel *_titleLabel;
    UIImage *_cardImage;
    double _headerHeight;
    BOOL _viewDidAppear;
    PKAnimatedNavigationBarTitleView *_titleIconView;
    PKPaymentSetupChooseProductListSectionController *_listSectionController;
}

@property (readonly, nonatomic) PKPaymentSetupProduct *product;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)didSelectPKPaymentSetupChooseProductListItem:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 flowController:(id)a3 product:(id)a4;

@end
