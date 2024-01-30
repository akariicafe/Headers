@class PKPaymentSetupFieldPicker;

@interface PKApplyListPickerSectionController : PKApplyCollectionViewSectionController {
    PKPaymentSetupFieldPicker *_picker;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)initWithPicker:(id)a0;
- (id)headerAttributedStringForIdentifier:(id)a0;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
