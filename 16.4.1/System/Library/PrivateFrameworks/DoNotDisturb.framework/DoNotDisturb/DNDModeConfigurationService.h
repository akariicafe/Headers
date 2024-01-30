@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DNDModeConfigurationService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_listeners;
    BOOL _registeredForUpdates;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (void)removeListener:(id)a0;
- (BOOL)setAppConfigurationTargetContentIdentifierPrefix:(id)a0 forActionIdentifier:(id)a1 forApplicationIdentifier:(id)a2 modeIdentifier:(id)a3 error:(id *)a4;
- (BOOL)clearAppActionWithIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)createModeConfigurationUsingTemplateForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)clearSystemConfigurationActionWithIdentifier:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (id)getSystemActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)setAppAction:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)getAppConfigurationTargetContentIdentifierPrefixesForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)removeModeConfigurationForModeIdentifier:(id)a0 error:(id *)a1;
- (id)_createDefaultModeConfigurationForIdentifier:(id)a0 withRequestDetails:(id)a1 error:(id *)a2;
- (BOOL)setSystemConfigurationAction:(id)a0 modeIdentifier:(id)a1 error:(id *)a2;
- (BOOL)removeModeConfigurationForModeIdentifier:(id)a0 deletePlaceholder:(BOOL)a1 error:(id *)a2;
- (BOOL)canRemoveModeConfigurationForModeIdentifier:(id)a0;
- (unsigned long long)_defaultConfigurationTypeForModeSemanticType:(long long)a0;
- (void)remoteService:(id)a0 didReceiveAppConfigurationContextUpdateForModeIdentifier:(id)a1;
- (BOOL)clearAppConfigurationActionWithIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)_createEmptyModeConfigurationForMode:(id)a0 withRequestDetails:(id)a1 error:(id *)a2;
- (BOOL)setSystemAction:(id)a0 forModeIdentifier:(id)a1 error:(id *)a2;
- (BOOL)isLocalUserAvailableForContactInActiveMode:(id)a0 error:(id *)a1;
- (id)createDefaultWorkoutModeConfigurationWithError:(id *)a0;
- (BOOL)getSyncPreferenceEnabledReturningError:(id *)a0;
- (void)addListener:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)getAppConfigurationPredicateForActionIdentifier:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)publishCurrentStatusKitAvailabilityReturningError:(id *)a0;
- (BOOL)setAppConfigurationAction:(id)a0 forApplicationIdentifier:(id)a1 modeIdentifier:(id)a2 error:(id *)a3;
- (id)getAppConfigurationTargetContentIdentifierPrefixesForCurrentModeReturningError:(id *)a0;
- (BOOL)setModeConfiguration:(id)a0 error:(id *)a1;
- (id)allModesReturningError:(id *)a0;
- (BOOL)setSyncPreferenceEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)hasActivelyConfiguredModes:(BOOL *)a0 error:(id *)a1;
- (id)createModeConfigurationUsingTemplateForModeSemanticType:(long long)a0 error:(id *)a1;
- (BOOL)syncModeConfigurationsReturningError:(id *)a0;
- (id)getAppActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (id)silencedModesForContactHandle:(id)a0 error:(id *)a1;
- (BOOL)getSyncEnabledReturningError:(id *)a0;
- (id)modeConfigurationForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)clearSystemActionWithIdentifier:(id)a0 forModeIdentifier:(id)a1 error:(id *)a2;
- (id)createEmptyModeConfigurationForMode:(id)a0 error:(id *)a1;
- (BOOL)setAppConfigurationPredicate:(id)a0 forActionIdentifier:(id)a1 forApplicationIdentifier:(id)a2 modeIdentifier:(id)a3 error:(id *)a4;
- (BOOL)getSyncAvailableReturningError:(id *)a0;
- (id)allowedModesForContactHandle:(id)a0 error:(id *)a1;
- (id)availableModesReturningError:(id *)a0;
- (id)getSystemConfigurationActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (id)modeConfigurationsReturningError:(id *)a0;
- (id)getAppConfigurationActionsForModeIdentifier:(id)a0 error:(id *)a1;
- (id)createDefaultDrivingModeConfigurationWithError:(id *)a0;
- (void)remoteService:(id)a0 didReceiveUpdatedAvailableModeIdentifiers:(id)a1;
- (id)_initWithClientIdentifier:(id)a0;
- (BOOL)_queue_registerForUpdatesIfRequired;
- (void).cxx_destruct;
- (id)createDefaultSleepingModeConfigurationWithError:(id *)a0;
- (BOOL)hasActivelyConfiguredModesReturningError:(id *)a0;

@end
