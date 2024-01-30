@class CADStatCollectionContext, NSMutableArray;

@interface CADStatsCalendars : CADStatCollector {
    CADStatCollectionContext *_context;
    NSMutableArray *_calendarInfos;
}

+ (id)eventName;

- (id)eventDictionaries;
- (void).cxx_destruct;
- (BOOL)calendarUsesAuthentication:(void *)a0;
- (void)prepareWithContext:(id)a0;
- (void)processCalendars:(id)a0 inStore:(void *)a1;
- (BOOL)wantsCalendars;

@end
