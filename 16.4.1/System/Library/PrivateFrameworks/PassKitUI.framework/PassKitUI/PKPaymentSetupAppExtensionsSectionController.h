@class NSMutableDictionary;
@protocol PKPaymentSetupAppExtensionsSectionControllerDelegate;

@interface PKPaymentSetupAppExtensionsSectionController : PKPaymentSetupListSectionController {
    NSMutableDictionary *_keyedListItems;
    struct CGSize { double width; double height; } _iconSize;
    unsigned long long _shouldDisplay;
}

@property (weak, nonatomic) id<PKPaymentSetupAppExtensionsSectionControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)_updateItemIdentifier:(id)a0 loadingIndicatorVisibility:(BOOL)a1;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)decoratePaymentSetListCell:(id)a0 forItem:(id)a1;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)updateWithRequirements:(unsigned long long)a0 paymentSetupProductModel:(id)a1;

@end
