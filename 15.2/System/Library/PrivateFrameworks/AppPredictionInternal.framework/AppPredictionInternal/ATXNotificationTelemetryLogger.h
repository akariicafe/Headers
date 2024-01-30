@class ATXNotificationAndSuggestionDatastore, ATXDNDModeConfigurationClient, NSMutableDictionary;

@interface ATXNotificationTelemetryLogger : NSObject {
    ATXNotificationAndSuggestionDatastore *_datastore;
    ATXDNDModeConfigurationClient *_modeConfigClient;
    NSMutableDictionary *_summaryMetrics;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDatastore:(id)a0 modeConfigClient:(id)a1;
- (id)summaryMetricsForActivityType:(unsigned long long)a0;
- (void)logNotificationMetricsFromStartTimestamp:(id)a0 toEndTimestamp:(id)a1;
- (void)logNotificationMetricsWithXPCActivity:(id)a0;

@end
