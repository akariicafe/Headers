@class UIStackView, NSArray, NSSet, HFItem, NSString;
@protocol HUResizableCellDelegate, HUDayOfWeekPickerCellDelegate;

@interface HUDayOfWeekPickerCell : UITableViewCell <HUCellProtocol>

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) id<HUDayOfWeekPickerCellDelegate> delegate;
@property (retain, nonatomic) NSSet *selectedRecurrences;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupConstraints;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)_toggleWeekdayButton:(id)a0;
- (void)_updateSelectedDays;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
