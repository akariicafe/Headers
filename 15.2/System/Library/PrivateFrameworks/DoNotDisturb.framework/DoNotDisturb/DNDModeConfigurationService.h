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

- (BOOL)isLocalUserAvailableForContactInActiveMode:(id)a0 error:(id *)a1;
- (void)removeListener:(id)a0;
- (id)publishCurrentStatusKitAvailabilityReturningError:(id *)a0;
- (BOOL)setSyncPreferenceEnabled:(BOOL)a0 error:(id *)a1;
- (id)_createDefaultModeConfigurationForIdentifier:(id)a0 withRequestDetails:(id)a1 error:(id *)a2;
- (id)allModesReturningError:(id *)a0;
- (BOOL)syncModeConfigurationsReturningError:(id *)a0;
- (id)createDefaultSleepingModeConfigurationWithError:(id *)a0;
- (id)createDefaultWorkoutModeConfigurationWithError:(id *)a0;
- (id)allowedModesForContactHandle:(id)a0 error:(id *)a1;
- (id)modeConfigurationForModeIdentifier:(id)a0 error:(id *)a1;
- (void)addListener:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)modeConfigurationsReturningError:(id *)a0;
- (void)remoteService:(id)a0 didReceiveUpdatedAvailableModeIdentifiers:(id)a1;
- (BOOL)getSyncEnabledReturningError:(id *)a0;
- (BOOL)_queue_registerForUpdatesIfRequired;
- (BOOL)setModeConfiguration:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)createDefaultDrivingModeConfigurationWithError:(id *)a0;
- (BOOL)canRemoveModeConfigurationForModeIdentifier:(id)a0;
- (id)availableModesReturningError:(id *)a0;
- (id)createModeConfigurationUsingTemplateForModeIdentifier:(id)a0 error:(id *)a1;
- (BOOL)getSyncPreferenceEnabledReturningError:(id *)a0;
- (id)_initWithClientIdentifier:(id)a0;
- (BOOL)getSyncAvailableReturningError:(id *)a0;
- (BOOL)removeModeConfigurationForModeIdentifier:(id)a0 error:(id *)a1;

@end
