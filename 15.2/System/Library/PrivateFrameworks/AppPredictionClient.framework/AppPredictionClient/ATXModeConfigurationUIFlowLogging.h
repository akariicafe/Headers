@class ATXModeConfigurationUIFlowLoggingBiomeStream;

@interface ATXModeConfigurationUIFlowLogging : NSObject {
    ATXModeConfigurationUIFlowLoggingBiomeStream *_modeConfigurationUIFlowLoggingBiomeStream;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)a0;
- (void)logModeConfigurationChangesForModeUUID:(id)a0 modeConfigurationUI:(int)a1 modeConfigurationEntityType:(int)a2 previousEntityIdentifiers:(id)a3 suggestedEntityIdentifiers:(id)a4 currentEntityIdentifiers:(id)a5;

@end
