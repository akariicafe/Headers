@class UIViewController, PSSpecifier;

@interface PSEditingPane : UIView {
    PSSpecifier *_specifier;
    id _delegate;
    unsigned char _requiresKeyboard : 1;
}

@property (weak, nonatomic) UIViewController *viewController;

+ (id)defaultBackgroundColor;
+ (float)preferredHeight;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (BOOL)changed;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)editMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInsetContent;
- (id)childViewControllerForHostingViewController;
- (BOOL)requiresKeyboard;
- (void)layoutInsetContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPreferenceSpecifier:(id)a0;
- (void)setPreferenceValue:(id)a0;
- (void)viewDidBecomeVisible;
- (id)preferenceSpecifier;
- (id)preferenceValue;
- (BOOL)handlesDoneButton;
- (id)scrollViewToBeInsetted;
- (id)specifierLabel;
- (BOOL)wantsNewButton;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (void)addNewValue;
- (void)doneEditing;
- (void)insetContent;

@end
