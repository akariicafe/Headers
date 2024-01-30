@class NSString, DNDModeConfigurationService, NSHashTable, DNDGlobalConfigurationService, NSObject;
@protocol OS_dispatch_queue;

@interface DNDSettingsService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_settingsUpdateListeners;
    BOOL _registeredForUpdates;
    DNDModeConfigurationService *_modeConfigurationService;
    DNDGlobalConfigurationService *_globalConfigurationService;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (BOOL)setPhoneCallBypassSettings:(id)a0 error:(id *)a1;
- (void)remoteService:(id)a0 didReceiveUpdatedPhoneCallBypassSettings:(id)a1;
- (id)_initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)behaviorSettingsReturningError:(id *)a0;
- (id)scheduleSettingsReturningError:(id *)a0;
- (BOOL)_queue_registerForSettingsUpdatesIfRequired;
- (BOOL)addSettingsUpdateListener:(id)a0 error:(id *)a1;
- (void)addSettingsUpdateListener:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)configurationForModeIdentifier:(id)a0 error:(id *)a1;
- (id)phoneCallBypassSettingsReturningError:(id *)a0;
- (void)remoteService:(id)a0 didReceiveUpdatedBehaviorSettings:(id)a1;
- (void)remoteService:(id)a0 didReceiveUpdatedScheduleSettings:(id)a1;
- (void)removeSettingsUpdateListener:(id)a0;
- (BOOL)removeSettingsUpdateListener:(id)a0 error:(id *)a1;
- (BOOL)setBehaviorSettings:(id)a0 error:(id *)a1;
- (BOOL)setBehaviorSettings:(id)a0 returningError:(id *)a1;
- (BOOL)setConfiguration:(id)a0 forModeIdentifier:(id)a1 error:(id *)a2;
- (BOOL)setPhoneCallBypassSettings:(id)a0 returningError:(id *)a1;
- (BOOL)setScheduleSettings:(id)a0 error:(id *)a1;
- (BOOL)setScheduleSettings:(id)a0 returningError:(id *)a1;

@end
