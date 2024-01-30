@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DNDGlobalConfigurationService : NSObject <DNDRemoteServiceConnectionEventListener> {
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

- (id)getPhoneCallBypassSettingsReturningError:(id *)a0;
- (BOOL)setPairSyncPreferenceEnabled:(BOOL)a0 error:(id *)a1;
- (void)removeListener:(id)a0;
- (BOOL)setCloudSyncPreferenceEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)isCloudSyncActive;
- (void)addListener:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)setPhoneCallBypassSettings:(id)a0 error:(id *)a1;
- (void)remoteService:(id)a0 didReceiveUpdatedPreventAutoReplySetting:(BOOL)a1;
- (BOOL)_queue_registerForUpdatesIfRequired;
- (void).cxx_destruct;
- (unsigned long long)getCloudSyncStateReturningError:(id *)a0;
- (BOOL)isAutoReplyPrevented;
- (unsigned long long)getPairSyncStateReturningError:(id *)a0;
- (id)getStateDumpReturningError:(id *)a0;
- (id)_initWithClientIdentifier:(id)a0;
- (void)remoteService:(id)a0 didReceiveUpdatedPairSyncState:(unsigned long long)a1;
- (BOOL)setPreventAutoReply:(BOOL)a0 error:(id *)a1;
- (void)didChangeFocusStatusSharingSettingForApplicationIdentifier:(id)a0;
- (void)remoteService:(id)a0 didReceiveUpdatedPhoneCallBypassSettings:(id)a1;
- (BOOL)getPreventAutoReplyReturningError:(id *)a0;

@end
