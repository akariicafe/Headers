@interface MenstrualCyclesAppPlugin.DeviationCustomDetailViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dateRangeLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailView;
    void /* unknown type, empty encoding */ subscriptions;
}

- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)doneButtonTapped;
- (void)nextButtonTapped;
- (void)exportPDFTapped;

@end
