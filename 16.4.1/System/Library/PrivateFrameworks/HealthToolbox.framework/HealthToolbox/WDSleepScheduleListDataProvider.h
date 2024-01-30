@class NSDateFormatter, NSCalendar;

@interface WDSleepScheduleListDataProvider : WDSampleListDataProvider {
    NSDateFormatter *_standaloneFormatter;
    NSDateFormatter *_listItemFormatter;
    NSCalendar *_gregorianCalender;
}

- (long long)cellStyle;
- (unsigned long long)numberOfSections;
- (id)sampleTypes;
- (void).cxx_destruct;
- (id)titleForSection:(unsigned long long)a0;
- (id)initWithDisplayType:(id)a0 profile:(id)a1;
- (id)textForObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0 forSection:(unsigned long long)a1 sectionRemoved:(BOOL *)a2;
- (id)secondaryTextForObject:(id)a0;

@end
