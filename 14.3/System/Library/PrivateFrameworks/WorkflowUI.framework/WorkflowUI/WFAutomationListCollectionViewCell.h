@class UIView, NSString, HFTriggerItem, WFConfiguredTrigger, WFAutomationSummaryIconsView, NSLayoutConstraint, WFWorkflow, UILabel;

@interface WFAutomationListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WFConfiguredTrigger *configuredTrigger;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) HFTriggerItem *homeTrigger;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) WFAutomationSummaryIconsView *summaryIconsView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (readonly, nonatomic) UIView *separatorView;
@property (readonly, nonatomic) NSLayoutConstraint *separatorViewHeightConstraint;
@property unsigned long long maskedCorners;
@property BOOL showsSeparator;

- (void)updateUI;
- (void).cxx_destruct;
- (void)configureWithModel:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setConfiguredTrigger:(id)a0 workflow:(id)a1;

@end
