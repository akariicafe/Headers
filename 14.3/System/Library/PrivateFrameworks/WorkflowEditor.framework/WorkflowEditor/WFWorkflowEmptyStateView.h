@class NSAttributedString, WFWorkflow, UILabel, NSLayoutConstraint, UIButton;
@protocol WFWorkflowEmptyStateViewDelegate;

@interface WFWorkflowEmptyStateView : UIView

@property (readonly, nonatomic) UILabel *instructionLabel;
@property (readonly, nonatomic) UIButton *tourButton;
@property (readonly, nonatomic) UIButton *addButton;
@property (readonly, nonatomic) NSLayoutConstraint *addButtonHeightConstraint;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (weak, nonatomic) id<WFWorkflowEmptyStateViewDelegate> delegate;
@property (copy, nonatomic) NSAttributedString *instructionText;

- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)updateFontSizes;
- (void)updateColors;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithWorkflow:(id)a0 forNewWorkflow:(BOOL)a1;
- (void)adoptTraitCollection:(id)a0;
- (void)showTutorial;
- (void)showDrawer;

@end
