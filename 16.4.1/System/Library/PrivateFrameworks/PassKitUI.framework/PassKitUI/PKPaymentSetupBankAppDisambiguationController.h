@class NSMutableArray, PKPaymentSetupProduct;
@protocol PKPaymentSetupBankAppDisambiguationControllerDelegate;

@interface PKPaymentSetupBankAppDisambiguationController : PKPaymentSetupListSectionController {
    PKPaymentSetupProduct *_paymentSetupProduct;
    NSMutableArray *_inAppItemIdentifierToItemMapping;
    NSMutableArray *_cameraItemIdentifierToItemMapping;
}

@property (weak) id<PKPaymentSetupBankAppDisambiguationControllerDelegate> delegate;

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)initWithPaymentSetupProduct:(id)a0;
- (id)_listItemWithName:(id)a0;
- (void)_updateItemWithIdentifier:(id)a0 loadingIndicatorVisibility:(BOOL)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
