@class WFAutomationSummaryIconsView, HFTriggerItem, NSString, WFWorkflow, WFConfiguredTrigger, UILabel;

@interface WFAutomationListCell : UITableViewCell

@property (retain, nonatomic) WFConfiguredTrigger *configuredTrigger;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) HFTriggerItem *homeTrigger;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) WFAutomationSummaryIconsView *summaryIconsView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateUI;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)configureWithModel:(id)a0;
- (void)prepareForReuse;
- (void)setConfiguredTrigger:(id)a0 workflow:(id)a1;

@end
