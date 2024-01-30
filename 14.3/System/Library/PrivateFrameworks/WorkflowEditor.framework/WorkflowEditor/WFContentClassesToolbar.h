@class WFModuleAppearance, NSArray, UIImageView, WFWorkflow, UILabel, UIView, NSLayoutConstraint;
@protocol WFContentClassesToolbarDelegate;

@interface WFContentClassesToolbar : UICollectionReusableView

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UILabel *typesLabel;
@property (weak, nonatomic) UIImageView *chevronImageView;
@property (nonatomic) BOOL highlighted;
@property (readonly, nonatomic) NSLayoutConstraint *chevronVisibleConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *chevronHiddenConstraint;
@property (weak, nonatomic) id<WFContentClassesToolbarDelegate> delegate;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (copy, nonatomic) NSArray *contentClasses;
@property (nonatomic) BOOL toolbarDisabled;
@property (retain, nonatomic) WFModuleAppearance *appearance;

+ (double)preferredHeight;
+ (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })contentViewInsets;
+ (id)headingFont;

- (void)updateAppearance;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityElementsHidden;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)highlight;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)unhighlight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)accessibilityActivate;
- (id)accessibilityHint;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)updateTypesLabel;
- (void)typesLabelTapped;
- (void)fadeOutHighlight;

@end
