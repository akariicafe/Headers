@class UITableViewCell, UISwitch;

@interface EKEventPrivacyLevelDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    UISwitch *_control;
    BOOL _switchStateIsOn;
}

- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setEvent:(id)a0 store:(id)a1;
- (void)_switchChanged:(id)a0;
- (void)reset;

@end
