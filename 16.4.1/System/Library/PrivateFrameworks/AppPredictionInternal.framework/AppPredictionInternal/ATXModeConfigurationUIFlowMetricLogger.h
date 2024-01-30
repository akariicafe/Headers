@class ATXModeConfigurationUIFlowLoggingBiomeStream, ATXFocusModeSignalsMetricLogger, ATXFocusModeContactsMetricLogger;

@interface ATXModeConfigurationUIFlowMetricLogger : NSObject {
    ATXModeConfigurationUIFlowLoggingBiomeStream *_modeConfigurationUIFlowLoggingBiomeStream;
    ATXFocusModeSignalsMetricLogger *_focusModeSignalsLogger;
    ATXFocusModeContactsMetricLogger *_focusModeContactsLogger;
}

- (void)logCompletion:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFocusModeSignalsLogger:(id)a0;
- (id)modeConfigurationUIFlowBookmark;
- (id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)a0 focusModeSignalsLogger:(id)a1;
- (void)logModeConfigurationUIFlowMetric;
- (void)logModeConfigurationUIFlowMetricWithXPCActivity:(id)a0;
- (unsigned long long)numEntitiesAdded:(id)a0;
- (unsigned long long)numEntitiesRemoved:(id)a0;
- (unsigned long long)numSuggestedEntitiesAdded:(id)a0;
- (unsigned long long)numSuggestedEntitiesRemoved:(id)a0;
- (void)writeBookmarkToFile:(id)a0;

@end
