@class UIStackView, UISwitch, MTUIAlarmView;
@protocol HUAlarmTableViewCellDelegate;

@interface HUAlarmTableViewCell : UITableViewCell

@property (retain, nonatomic) MTUIAlarmView *alarmView;
@property (retain, nonatomic) UISwitch *enabledSwitch;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<HUAlarmTableViewCellDelegate> delegate;
@property (nonatomic, getter=isDisabled) BOOL disabled;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)init;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setupConstraints;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)willTransitionToState:(unsigned long long)a0;
- (void)refreshUI:(id)a0 accessoryName:(id)a1 animated:(BOOL)a2;
- (void)_alarmActiveChanged:(id)a0;
- (id)_alarmBackgroundColor;
- (void)setAlarmActiveDelegate:(id)a0;

@end
