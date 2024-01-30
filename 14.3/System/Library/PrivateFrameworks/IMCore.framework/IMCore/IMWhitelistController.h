@class DMFApplicationPolicyMonitor, NSString, STConversation, NSSet, NSMutableDictionary, IMCommLimitsPolicyCache, TUCallProviderManager, NSObject;
@protocol OS_dispatch_queue;

@interface IMWhitelistController : NSObject <TUCallProviderManagerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _needsNotificationsRegistering;
    STConversation *_stateLock_STConversation;
    NSSet *_stateLock_emergencyNumbersSet;
}

@property (class, readonly, nonatomic) BOOL isContactLimitsFeatureEnabled;

@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *screenTimeDispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setupDispatchQueue;
@property (retain, nonatomic) IMCommLimitsPolicyCache *policyCache;
@property (retain, nonatomic) NSMutableDictionary *bundleIDPolicyMap;
@property (retain, nonatomic) DMFApplicationPolicyMonitor *appPolicyMonitor;
@property (nonatomic) BOOL isRunningFromMacMessagesApp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)fetchEmergencyNumbersSetWithProviderManager:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)conversationContextForChat:(id)a0;
- (void)providersChangedForProviderManager:(id)a0;
- (BOOL)allowedToShowAppExtensionWithBundleIdentifier:(id)a0;
- (BOOL)isDowntimeLimited;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)allowedToShowConversationWithHandleIDs:(id)a0 sync:(BOOL)a1 context:(id *)a2;
- (BOOL)allowedToShowConversationForChat:(id)a0 sync:(BOOL)a1;
- (void)fetchScreenTimeAppPolicy;
- (void)getSTConversation:(id /* block */)a0;
- (BOOL)allowedToShowConversationWithHandleIDs:(id)a0 sync:(BOOL)a1 context:(id *)a2 participantIDsHash:(id)a3;
- (void)_doRegisterForScreenTimeNotifications;
- (void)initializeContext:(id)a0 participantIDsHash:(id)a1;
- (id)emergencyNumbers;
- (id)STConversation;
- (void)_addObserversToChat:(id)a0;
- (void)_participantsForChatDidChange:(id)a0;
- (void)setEmergencyNumbers:(id)a0;
- (BOOL)isEmergencyHandle:(id)a0;
- (void)registerForScreenTimeNotifications;

@end
