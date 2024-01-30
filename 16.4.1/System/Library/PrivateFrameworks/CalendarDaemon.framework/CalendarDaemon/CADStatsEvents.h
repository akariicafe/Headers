@class NSMutableArray;

@interface CADStatsEvents : CADStatCollector {
    NSMutableArray *_eventInfos;
}

+ (id)eventName;

- (id)eventDictionaries;
- (void).cxx_destruct;
- (void)prepareWithContext:(id)a0;
- (void)processEvents:(id)a0;
- (BOOL)wantsEvents;

@end
