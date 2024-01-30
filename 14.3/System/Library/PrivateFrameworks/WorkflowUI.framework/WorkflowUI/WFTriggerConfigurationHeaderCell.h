@class UIImageView, UILabel;

@interface WFTriggerConfigurationHeaderCell : UITableViewCell

@property (readonly, nonatomic) UIImageView *triggerIconView;
@property (readonly, nonatomic) UILabel *triggerTitleLabel;
@property (retain, nonatomic) Class triggerTypeClass;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateUI;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)configureWithImage:(id)a0 title:(id)a1 numberOfLines:(long long)a2;

@end
