@class NSMutableDictionary;

@interface CADStatsPreferences : CADStatCollector {
    NSMutableDictionary *payload;
}

+ (id)eventName;

- (id)eventDictionaries;
- (id)init;
- (void).cxx_destruct;

@end
