@class NSString, NSMutableDictionary;

@interface DAAccountNotifier : NSObject <ACDAccountNotificationPlugin> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stopMonitoringAgentsTokensLock;
}

@property (readonly, nonatomic) NSMutableDictionary *stopMonitoringAgentsTokens;
@property (readonly, nonatomic) BOOL shouldProcessAccountChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dataclassesWeCareAbout;
+ (BOOL)_isStoreFromRemindd:(id)a0;
+ (BOOL)_daAccountChangeType:(unsigned long long *)a0 forACAccountChangeType:(int)a1;
+ (BOOL)_isStoreFromDataAccess:(id)a0;
+ (BOOL)_isStore:(id)a0 fromClient:(id)a1;
+ (id)_propertiesThatTriggerRefresh;
+ (id)_accountPropertiesThatTriggerRefresh;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (id)_popMonitoringAgentsTokenForAccountWithIdentifier:(id)a0;
- (BOOL)_shouldRefreshForChangeOfType:(int)a0 forAccount:(id)a1 oldAccount:(id)a2;
- (void)_stopMonitoringAgentsForAccountWithIdentifier:(id)a0;
- (id)_modifiedDataclassesForAccount:(id)a0 oldAccount:(id)a1;
- (void)_disableLocalStoreIfNeedForAccount:(id)a0;
- (void)_startMonitoringAgentsIfNeededForAccountWithIdentifier:(id)a0;

@end
