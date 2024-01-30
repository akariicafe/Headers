@class NSMutableDictionary;

@interface ATXTVWidgetLogHarvester : NSObject {
    NSMutableDictionary *_tvWidgetMetrics;
}

+ (id)_stringForWidgetSuggestionEventType:(long long)a0;

- (void).cxx_destruct;
- (id)init;
- (void)sendToCoreAnalytics;
- (id)dryRunResult;
- (id)shouldSuggestTVWidgetWithDefaults:(id)a0;
- (void)generateTVWidgetMetrics;

@end
