@class PKPaymentSetupProductModel, NSString, PKPaymentSetupAppExtensionsSectionController, PKPaymentSetupFlowController, PKPaymentSetupCategoriesSectionController;

@interface PKPaymentSetupWelcomeViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupCategoriesSectionControllerDelegate, PKPaymentSetupAppExtensionsSectionControllerDelegate, PKPaymentSetupActivitySpinnerProtocol, PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate> {
    PKPaymentSetupCategoriesSectionController *_categoriesSectionController;
    PKPaymentSetupAppExtensionsSectionController *_appExtensionSectionController;
    PKPaymentSetupFlowController *_flowController;
    NSString *_loadingIdentifier;
    PKPaymentSetupProductModel *_filteredPaymentSetupProductModel;
    unsigned long long _currentConfiguredRequirements;
    BOOL _isDisplayingError;
    BOOL _didPreflight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)preflightRequirementsUpdated:(unsigned long long)a0 displaybleError:(id)a1;
- (void)provisioningControllerUpdatedProducts:(id)a0;
- (void)dealloc;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2;
- (BOOL)didSelectYourCardsWithCompletion:(id /* block */)a0;
- (BOOL)didSelectCategory:(id)a0 completion:(id /* block */)a1;
- (void)reloadRequiredForSectionIdentifier:(id)a0 animated:(BOOL)a1;
- (BOOL)didSelectAppExtensionWithIdentifier:(id)a0 title:(id)a1 completion:(id /* block */)a2;
- (void)_updateHeaderContentsWithProvisoningController:(id)a0;
- (void)reloadSectionsForRequirements:(unsigned long long)a0 animated:(BOOL)a1 forceReload:(BOOL)a2;
- (void)_updateFilteredPaymentSetupProductModelForRequirements:(unsigned long long)a0 provisoningController:(id)a1 forceReload:(BOOL)a2;
- (BOOL)_didSelectItemWithIdentifier:(id)a0 title:(id)a1 category:(id)a2 productidentifiers:(id)a3 completion:(id /* block */)a4;

@end
