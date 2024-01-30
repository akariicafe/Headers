@class NSArray, NSSet, UIStackView;
@protocol WFTimeTriggerDayOfWeekCellDelegate;

@interface WFTimeTriggerDayOfWeekCell : UITableViewCell

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIStackView *stackView;
@property (weak, nonatomic) id<WFTimeTriggerDayOfWeekCellDelegate> delegate;
@property (retain, nonatomic) NSSet *selectedRecurrences;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupConstraints;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)updateSelectedDays;
- (void)toggleWeekdayButton:(id)a0;

@end
