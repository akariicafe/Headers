@class UILabel, NSMutableArray, UISwitch;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem {
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
- (id)footerTitle;
- (unsigned long long)numberOfSubitems;
- (id)cellText;
- (void)reset;
- (void)setCalendar:(id)a0 store:(id)a1;
- (BOOL)saveStateToCalendar:(id)a0;
- (BOOL)cellWrapsLongText;
- (BOOL)shouldHideSwitch;
- (void)_switchStateChanged:(id)a0;
- (id)descriptionLabelText;

@end
