@class ATXNotificationAndSuggestionDatastore;

@interface ATXNotificationAdjacentSuggestionMetricsLogger : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
}

- (id)initWithDatastore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)logNotificationAdjacentSuggestionMetrics;
- (void)logNotificationAdjacentSuggestionMetricsWithXPCActivity:(id)a0;

@end
