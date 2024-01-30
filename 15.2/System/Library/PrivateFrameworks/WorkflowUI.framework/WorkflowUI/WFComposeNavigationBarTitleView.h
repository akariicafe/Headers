@class WFWorkflow, UIViewController, WFComposeNavigationBarTitleContentView;

@interface WFComposeNavigationBarTitleView : _UINavigationBarTitleView

@property (readonly, nonatomic) WFComposeNavigationBarTitleContentView *contentView;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, weak, nonatomic) UIViewController *parentViewController;

- (void)layoutSubviews;
- (void)navigationBarTraitCollectionDidChangeTo:(id)a0 from:(id)a1;
- (id)placeholderName;
- (void).cxx_destruct;
- (BOOL)finishRenamingIfNecessary;
- (void)updatePlaceholderIfNecessary;
- (id)initWithWorkflow:(id)a0 parentViewController:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsWithExclusionRects:(id)a0;

@end
