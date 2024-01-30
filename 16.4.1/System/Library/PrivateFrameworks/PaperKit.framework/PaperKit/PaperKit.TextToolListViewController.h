@interface PaperKit.TextToolListViewController : UIViewController {
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ contentSizeObserver;
    void /* unknown type, empty encoding */ minimumItemHeight;
    void /* unknown type, empty encoding */ minimumPreferredContentSizeWidth;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ autoFillFormListItemVisible;
    void /* unknown type, empty encoding */ addShapeListItemVisible;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listItemViews;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addTextBoxListItemView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_autoFillFormListItemView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addSignatureListItemView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_addShapeListItemView;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)updatePreferredContentSize;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didTapAddShapeListItemView:(id)a0 forEvent:(id)a1;
- (void)didTapAddSignatureListItemView:(id)a0 forEvent:(id)a1;
- (void)didTapAddTextBoxListItemView:(id)a0 forEvent:(id)a1;
- (void)didTapAutoFillFormListItemView:(id)a0 forEvent:(id)a1;

@end
