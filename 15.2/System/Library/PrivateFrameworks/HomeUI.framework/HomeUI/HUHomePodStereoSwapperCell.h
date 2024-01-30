@class UIButton, HUHomePodDetailView;
@protocol HUHomePodStereoSwapperCellDelegate;

@interface HUHomePodStereoSwapperCell : UITableViewCell

@property (retain, nonatomic) UIButton *swapButton;
@property (retain, nonatomic) HUHomePodDetailView *leftHomePod;
@property (retain, nonatomic) HUHomePodDetailView *rightHomePod;
@property (nonatomic) unsigned long long homePodVariant;
@property (weak, nonatomic) id<HUHomePodStereoSwapperCellDelegate> delegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_swap;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)finishSetupWithDelegate:(id)a0 selectionStyle:(long long)a1 homePodVariant:(unsigned long long)a2;

@end
