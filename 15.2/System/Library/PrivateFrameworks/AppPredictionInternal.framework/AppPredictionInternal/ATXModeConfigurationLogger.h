@class ATXDNDModeConfigurationClient;

@interface ATXModeConfigurationLogger : NSObject

@property (readonly, nonatomic) ATXDNDModeConfigurationClient *client;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDNDModeConfigurationClient:(id)a0;
- (void)logModeConfigurationsWithXPCActivity:(id)a0;
- (void)logMetricForConfiguration:(id)a0;
- (void)logModeConfigurations;

@end
