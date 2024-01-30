@class ATXDNDModeConfigurationClient;

@interface ATXModeEntityScoresDistributionLogger : NSObject {
    ATXDNDModeConfigurationClient *_modeConfigClient;
}

- (void).cxx_destruct;
- (id)init;
- (id)dndModeUUID:(unsigned long long)a0;
- (void)logModeEntityScoresDistributionWithXPCActivity:(id)a0;
- (void)logModeEntityScoresDistributionForMode:(id)a0 entityType:(id)a1 entities:(id)a2;
- (void)logModeEntityScoresDistribution;

@end
