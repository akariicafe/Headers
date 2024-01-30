@class PKApplyController, PKDynamicProvisioningPageContent;
@protocol PKApplyCollectionViewSectionControllerDelegate;

@interface PKApplyCollectionViewSectionController : PKPaymentSetupListSectionController

@property (readonly, nonatomic) PKApplyController *controller;
@property (retain, nonatomic) PKDynamicProvisioningPageContent *page;
@property (nonatomic) id<PKApplyCollectionViewSectionControllerDelegate> dynamicCollectionDelegate;

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (BOOL)_hasFooterContentForIdentifier:(id)a0;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)_hasHeaderContentForIdentifier:(id)a0;
- (id)cellRegistrationForItem:(id)a0;
- (void)configureCellForRegistration:(id)a0 item:(id)a1;
- (void)configureFooterView:(id)a0 forSectionIdentifier:(id)a1;
- (void)configureHeaderView:(id)a0 forSectionIdentifier:(id)a1;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (Class)footerViewClassForSectionIdentifier:(id)a0;
- (Class)headerViewClassForSectionIdentifier:(id)a0;
- (id)initWithController:(id)a0 applyPage:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
