@class PKPayLaterDynamicContentPage, PKAccount;
@protocol PKPayLaterSectionControllerDelegate, PKPayLaterViewControllerDelegate;

@interface PKPayLaterSectionController : PKPaymentSetupListSectionController

@property (weak, nonatomic) id<PKPayLaterSectionControllerDelegate> dynamicCollectionDelegate;
@property (retain, nonatomic) PKAccount *payLaterAccount;
@property (readonly, nonatomic) PKPayLaterDynamicContentPage *dynamicContentPage;
@property (readonly, nonatomic) id<PKPayLaterViewControllerDelegate> viewControllerDelegate;

- (double)headerViewHeight;
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
- (id)contextMenuConfigurationForItem:(id)a0;
- (id)contextMenuForPayLaterItem:(id)a0;
- (void)didTapHyperLink:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })firstSectionHeaderEdgeInsets;
- (id)footerContentForSectionIdentifier:(id)a0;
- (Class)footerViewClassForSectionIdentifier:(id)a0;
- (Class)headerViewClassForSectionIdentifier:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 dynamicContentPage:(id)a1 viewControllerDelegate:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
