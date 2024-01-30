@class NSMutableDictionary;

@interface CADStatsSharedCalendars : CADStatCollector {
    NSMutableDictionary *calendarInfos;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)eventDictionaries;
- (void)prepareWithContext:(id)a0;
- (BOOL)wantsCalendars;
- (void)processCalendars:(id)a0 inStore:(void *)a1;

@end
