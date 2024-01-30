@class WFAutomationTypeExplanationPlatterView;

@interface WFAutomationEmptyStateCell : UITableViewCell

@property (readonly, nonatomic) WFAutomationTypeExplanationPlatterView *automationTypeView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureForAutomationType:(unsigned long long)a0 buttonTarget:(id)a1 action:(SEL)a2;

@end
