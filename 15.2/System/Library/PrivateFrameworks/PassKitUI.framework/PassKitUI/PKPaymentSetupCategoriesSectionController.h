@class NSMutableDictionary, NSMutableArray;
@protocol PKPaymentSetupCategoriesSectionControllerDelegate;

@interface PKPaymentSetupCategoriesSectionController : PKPaymentSetupListSectionController {
    NSMutableDictionary *_sectionIdentifierToSectionTitleMapping;
    NSMutableDictionary *_itemIdentifierToItemMapping;
    NSMutableDictionary *_sectionIdentifiersToItemIdentifierMapping;
    NSMutableArray *_orderedSectionIdentifiers;
    struct CGSize { double width; double height; } _iconSize;
    unsigned long long _currentConfiguredRequirements;
}

@property (weak, nonatomic) id<PKPaymentSetupCategoriesSectionControllerDelegate> delegate;

- (id)identifiers;
- (void).cxx_destruct;
- (id)init;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)didSelectItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)decoratePaymentSetListCell:(id)a0 forItem:(id)a1;
- (void)_updateItemIdentifier:(id)a0 loadingIndicatorVisibility:(BOOL)a1;
- (id)_listItemForItemIdentifier:(id)a0 paymentSetupProductModel:(id)a1;
- (BOOL)updateWithRequirements:(unsigned long long)a0 provisioningController:(id)a1 paymentSetupProductModel:(id)a2 displayLoadingIndicator:(BOOL *)a3 forceProductConfiguration:(BOOL)a4;

@end
