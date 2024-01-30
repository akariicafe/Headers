@class NSString, NSMutableDictionary, NPSDomainAccessor, NPSManager, NSObject;
@protocol OS_dispatch_queue, DNDSWorkoutTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource;

@interface DNDSWorkoutTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NPSDomainAccessor *_accessor;
    NPSManager *_npsManager;
}

@property (weak, nonatomic) id<DNDSWorkoutTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pairedDeviceDidChange;
- (void)_setWorkoutDNDNanoPreferenceEnabled:(BOOL)a0;
- (id)_accessor;
- (void)refreshMigratingIfNecessary;
- (void)_migrateWorkoutDNDNanoPreference;
- (void)_configureWorkoutTriggerWithMode:(id)a0;
- (void)_updateNanoPreferencesForRefreshWithModeConfiguration:(id)a0;
- (void)_refreshWithMode:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isWorkoutTriggerEnabledForModeConfiguration:(id)a0;
- (id)init;
- (void)refresh;
- (void)_refreshForNanoPreferenceChange;
- (BOOL)_isWorkoutDNDNanoPreferenceEnabled;
- (void)dealloc;
- (id)_assertionIdentifierForHealthKitWorkoutEvent:(id)a0;

@end
