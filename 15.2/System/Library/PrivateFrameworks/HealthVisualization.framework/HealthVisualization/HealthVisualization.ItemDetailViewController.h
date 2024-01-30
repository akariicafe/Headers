@interface HealthVisualization.ItemDetailViewController : UIViewController {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ allItemsButton;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ buttonStackView;
    void /* unknown type, empty encoding */ embeddedViewController;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_associatedObjectTypeButtons;
    void /* unknown type, empty encoding */ associatedObjectTypes;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)closeButtonTapped;
- (void)allItemsTapped;
- (void)associatedObjectTypeButtonTapped:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
