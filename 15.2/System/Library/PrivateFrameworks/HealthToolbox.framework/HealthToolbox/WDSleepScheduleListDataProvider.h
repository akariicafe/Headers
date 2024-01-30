@class NSDateFormatter, NSCalendar;

@interface WDSleepScheduleListDataProvider : WDSampleListDataProvider {
    NSDateFormatter *_standaloneFormatter;
    NSDateFormatter *_listItemFormatter;
    NSCalendar *_gregorianCalender;
}

- (id)sampleTypes;
- (long long)cellStyle;
- (void).cxx_destruct;
- (id)titleForSection:(unsigned long long)a0;
- (id)textForObject:(id)a0;
- (id)secondaryTextForObject:(id)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;

@end
