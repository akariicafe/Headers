@class PKPaymentSetupFieldPicker;

@interface PKApplyMultilevelListPickerSectionController : PKApplyCollectionViewSectionController {
    PKPaymentSetupFieldPicker *_picker;
}

- (id)identifiers;
- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (id)initWithController:(id)a0 applyPage:(id)a1 picker:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
