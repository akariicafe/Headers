@class ATXModeConfigurationUIFlowLoggingBiomeStream, ATXDNDModeConfigurationClient, ATXFocusModeSignalsMetricLogger;

@interface ATXModeConfigurationUIFlowMetricLogger : NSObject {
    ATXDNDModeConfigurationClient *_modeConfigClient;
    ATXModeConfigurationUIFlowLoggingBiomeStream *_modeConfigurationUIFlowLoggingBiomeStream;
    ATXFocusModeSignalsMetricLogger *_focusModeSignalsLogger;
}

- (void).cxx_destruct;
- (id)init;
- (void)logCompletion:(id)a0;
- (id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)a0;
- (void)writeBookmarkToFile:(id)a0;
- (void)logModeConfigurationUIFlowMetricWithXPCActivity:(id)a0;
- (id)modeConfigurationUIFlowBookmark;
- (unsigned long long)numEntitiesAdded:(id)a0;
- (unsigned long long)numEntitiesRemoved:(id)a0;
- (unsigned long long)numSuggestedEntitiesAdded:(id)a0;
- (unsigned long long)numSuggestedEntitiesRemoved:(id)a0;
- (void)logModeConfigurationUIFlowMetric;

@end
