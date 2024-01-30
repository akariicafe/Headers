@class ATXNotificationAndSuggestionDatastore;

@interface ATXNotificationAdjacentSuggestionMetricsLogger : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
}

- (id)initWithDatastore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)logNotificationAdjacentSuggestionMetricsWithXPCActivity:(id)a0;
- (void)logNotificationAdjacentSuggestionMetrics;

@end
