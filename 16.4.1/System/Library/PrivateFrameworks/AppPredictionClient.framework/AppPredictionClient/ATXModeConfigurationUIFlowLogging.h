@class ATXModeConfigurationUIFlowLoggingBiomeStream, NSObject;
@protocol OS_dispatch_queue;

@interface ATXModeConfigurationUIFlowLogging : NSObject {
    ATXModeConfigurationUIFlowLoggingBiomeStream *_modeConfigurationUIFlowLoggingBiomeStream;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithModeConfigurationUIFlowLoggingBiomeStream:(id)a0;
- (void)logModeConfigurationChangesForModeUUID:(id)a0 modeConfigurationUI:(int)a1 modeConfigurationEntityType:(int)a2 modeConfigurationType:(long long)a3 previousEntityIdentifiers:(id)a4 suggestedEntityIdentifiers:(id)a5 candidateEntityIdentifiers:(id)a6 currentEntityIdentifiers:(id)a7;
- (void)logModeConfigurationChangesForModeUUID:(id)a0 modeConfigurationUI:(int)a1 modeConfigurationEntityType:(int)a2 modeConfigurationType:(long long)a3 previousEntityIdentifiers:(id)a4 suggestedEntityIdentifiers:(id)a5 currentEntityIdentifiers:(id)a6;
- (void)logModeConfigurationChangesForModeUUID:(id)a0 modeConfigurationUI:(int)a1 modeConfigurationEntityType:(int)a2 previousEntityIdentifiers:(id)a3 suggestedEntityIdentifiers:(id)a4 currentEntityIdentifiers:(id)a5;
- (void)logModeConfigurationChangesOnboardingDismissedForModeUUID:(id)a0;

@end
