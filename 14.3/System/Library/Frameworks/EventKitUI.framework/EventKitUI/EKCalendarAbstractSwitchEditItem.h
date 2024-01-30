@class UITableViewHeaderFooterView, UISwitch, UILabel, NSMutableArray;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem {
    UITableViewHeaderFooterView *_footerView;
    UILabel *_descriptionLabel;
}

@property (nonatomic) BOOL allowEventAlerts;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) UISwitch *toggleSwitch;
@property (nonatomic) BOOL underlyingCalendarState;
@property (nonatomic) BOOL switchState;

- (id)cell;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)footerView;
- (void)reset;
- (void)setCalendar:(id)a0 store:(id)a1;
- (BOOL)cellWrapsLongText;
- (void)_switchStateChanged:(id)a0;
- (id)descriptionLabelText;
- (unsigned long long)numberOfSubitems;
- (id)cellText;
- (void)layoutForWidth:(double)a0;
- (void)_applyStyleToUILabel:(id)a0;
- (id)footerViewForSection;
- (double)footerHeightForSection;
- (BOOL)saveStateToCalendar:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;

@end
