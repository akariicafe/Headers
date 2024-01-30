@class UIViewController, PSSpecifier;

@interface PSEditingPane : UIView {
    PSSpecifier *_specifier;
    id _delegate;
    unsigned char _requiresKeyboard : 1;
}

@property (weak, nonatomic) UIViewController *viewController;

+ (float)preferredHeight;
+ (id)defaultBackgroundColor;

- (BOOL)changed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (BOOL)requiresKeyboard;
- (void).cxx_destruct;
- (void)editMode;
- (id)preferenceValue;
- (void)addNewValue;
- (id)childViewControllerForHostingViewController;
- (void)doneEditing;
- (BOOL)handlesDoneButton;
- (void)insetContent;
- (void)layoutInsetContent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferenceSpecifier;
- (id)scrollViewToBeInsetted;
- (void)setPreferenceSpecifier:(id)a0;
- (void)setPreferenceValue:(id)a0;
- (BOOL)shouldInsetContent;
- (id)specifierLabel;
- (void)viewDidBecomeVisible;
- (BOOL)wantsNewButton;

@end
