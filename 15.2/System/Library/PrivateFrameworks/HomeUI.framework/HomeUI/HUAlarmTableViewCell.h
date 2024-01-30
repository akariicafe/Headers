@class UIStackView, NSCalendar, UISwitch, UILabel, NSDate, MTAlarm;
@protocol HUAlarmTableViewCellDelegate;

@interface HUAlarmTableViewCell : UITableViewCell

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *baseDate;
@property (retain, nonatomic) UILabel *nameAndDescriptionLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIStackView *labelsStackView;
@property (retain, nonatomic) UISwitch *enabledSwitch;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) MTAlarm *alarm;
@property (weak, nonatomic) id<HUAlarmTableViewCellDelegate> delegate;
@property (nonatomic, getter=isDisabled) BOOL disabled;

+ (id)timeFormatter;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupConstraints;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)_createSubviews;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)willTransitionToState:(unsigned long long)a0;
- (id)_alarmBackgroundColor;
- (id)initWithMobileTimerObject:(id)a0 manager:(id)a1;
- (void)refreshUI:(id)a0 accessoryName:(id)a1 animated:(BOOL)a2;
- (void)_alarmActiveChanged:(id)a0;
- (void)_setTimeLabelToHour:(long long)a0 minute:(long long)a1;

@end
