@class PKPaymentProvisioningController, NSString, NSMutableDictionary, NSLocale, NSCharacterSet, NSMutableArray, NSObject, PKPaymentSetupProductsSectionListItem;
@protocol PKPaymentSetupProductsSectionControllerDelegate, OS_dispatch_queue;

@interface PKPaymentSetupProductsSectionController : PKPaymentSetupListSectionController {
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentSetupProductsSectionListItem *_addADifferentCardListItem;
    NSMutableDictionary *_itemIdentifierToItemMapping;
    NSMutableDictionary *_sectionIdentifierToItemIdentifierMapping;
    NSMutableArray *_orderedSectionIdentifiers;
    NSObject<OS_dispatch_queue> *_searchQueue;
    NSCharacterSet *_tokenizerCharacterSet;
    struct CGSize { double width; double height; } _iconSize;
    NSLocale *_currentLocale;
    NSString *_primaryRegion;
    NSString *_primaryCountryName;
    NSString *_secondaryRegion;
    NSString *_secondaryCountryName;
    BOOL _showSectionHeaders;
}

@property (weak, nonatomic) id<PKPaymentSetupProductsSectionControllerDelegate> delegate;

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)updateWithPaymentSetupProducts:(id)a0;
- (void)_applyDefaultSortToListItems:(id)a0;
- (void)_applyDefaultSortToSectionIdentifier:(id)a0;
- (void)_buildSectionIdentifierToItemIdentifierMapping:(id)a0 orderedSectionIdentifiers:(id)a1 fromListItems:(id)a2;
- (id)_cleanedSearchTermsFromString:(id)a0;
- (double)_distanceBewteenTerms:(id)a0 andSearchTerms:(id)a1;
- (id)_listItemFromProduct:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)_needsManualEntryButton;
- (id)_sectionIdentiferForProduct:(id)a0 alwaysWantsHeaders:(BOOL *)a1 wantsAddAdifferentCardButton:(BOOL *)a2;
- (void)_updateItemWithIdentifier:(id)a0 loadingIndicatorVisibility:(BOOL)a1;
- (void)applySearchString:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)decoratePaymentSetListCell:(id)a0 forItem:(id)a1;
- (id)initWithProvisoningController:(id)a0;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
