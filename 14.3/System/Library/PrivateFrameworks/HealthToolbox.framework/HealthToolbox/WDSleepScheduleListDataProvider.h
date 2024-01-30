@class NSDateFormatter, NSCalendar;

@interface WDSleepScheduleListDataProvider : WDSampleListDataProvider {
    NSDateFormatter *_standaloneFormatter;
    NSDateFormatter *_listItemFormatter;
    NSCalendar *_gregorianCalender;
}

- (void).cxx_destruct;
- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)a0;
- (id)sampleTypes;
- (id)textForObject:(id)a0;
- (id)secondaryTextForObject:(id)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;

@end
