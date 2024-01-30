@class MTUIAlarmView;

@interface WFAlarmTableViewCell : UITableViewCell

@property (readonly, nonatomic) MTUIAlarmView *alarmView;
@property (nonatomic) BOOL enabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)refreshUI:(id)a0 animated:(BOOL)a1;

@end
