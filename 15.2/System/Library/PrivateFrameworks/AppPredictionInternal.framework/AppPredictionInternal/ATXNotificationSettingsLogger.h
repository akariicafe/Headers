@class ATXNotificationSettingsReader;

@interface ATXNotificationSettingsLogger : NSObject {
    ATXNotificationSettingsReader *_reader;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithNotificationSettingsReader:(id)a0;
- (void)logNotificationSettingsMetricsWithXPCActivity:(id)a0;
- (void)logNotificationSettingsMetrics;

@end
