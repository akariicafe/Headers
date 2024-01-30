@class NSString, NSMutableDictionary, NPSDomainAccessor, NPSManager, NSObject;
@protocol OS_dispatch_queue, DNDSWorkoutTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource;

@interface DNDSWorkoutTriggerManager : NSObject <DNDSBiomeTriggerManager> {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NPSDomainAccessor *_accessor;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_npsQueue;
}

@property (weak, nonatomic) id<DNDSWorkoutTriggerManagerDataSource, DNDSBiomeTriggerManagerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refresh;
- (BOOL)_isWorkoutTriggerEnabledForModeConfiguration:(id)a0;
- (void)_refresh;
- (BOOL)_isWorkoutDNDNanoPreferenceEnabled;
- (void)_refreshMigratingIfNecessary;
- (id)_assertionIdentifierForHealthKitWorkoutEvent:(id)a0;
- (void)_migrateWorkoutDNDNanoPreference;
- (void)_refreshForNanoPreferenceChange;
- (void)_npsQueue_refreshForNanoPreferenceChange;
- (void)_configureWorkoutTriggerWithMode:(id)a0;
- (void)dealloc;
- (void)_updateNanoPreferencesForRefreshWithModeConfiguration:(id)a0;
- (void)refreshMigratingIfNecessary;
- (id)init;
- (void)_setWorkoutDNDNanoPreferenceEnabled:(BOOL)a0;
- (void)pairedDeviceDidChange;
- (id)_accessor;
- (void).cxx_destruct;
- (void)_refreshWithMode:(id)a0 event:(id)a1;

@end
