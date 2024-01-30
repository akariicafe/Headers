@class NSString, PKPaymentSetupField, NSArray;
@protocol PKTextFieldCollectionViewListCellDelegate;

@interface PKApplyRequiredFieldSectionController : PKApplyCollectionViewSectionController <PKTextFieldCollectionViewListCellDelegate> {
    PKPaymentSetupField *_field;
    NSArray *_items;
}

@property (nonatomic) id<PKTextFieldCollectionViewListCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)initWithController:(id)a0 applyPage:(id)a1 field:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (void)textFieldDidChangeSelection:(id)a0 forListCell:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0 forListCell:(id)a1;

@end
