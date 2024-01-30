@class UIViewController, PSSpecifier;

@interface PSEditingPane : UIView {
    PSSpecifier *_specifier;
    id _delegate;
    unsigned char _requiresKeyboard : 1;
}

@property (weak, nonatomic) UIViewController *viewController;

+ (id)defaultBackgroundColor;
+ (float)preferredHeight;

- (BOOL)changed;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void).cxx_destruct;
- (void)editMode;
- (id)childViewControllerForHostingViewController;
- (BOOL)shouldInsetContent;
- (void)insetContent;
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
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)addNewValue;
- (void)doneEditing;

@end
