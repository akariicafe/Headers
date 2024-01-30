@class NSString, NSMutableDictionary, NSObject, UMUserSyncTask;
@protocol OS_dispatch_queue;

@interface BRCAccountsManager : NSObject <UMUserSyncStakeholder, BRCAccountHandlerDelegate> {
    NSMutableDictionary *_accountHandlersByACAccountID;
    NSMutableDictionary *_versionsProvidersByVolumeID;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _finishedLoadingAccounts;
    UMUserSyncTask *_checkNeedsBubbleTask;
}

@property (readonly, nonatomic) BOOL isInSyncBubble;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)startedUpInSyncBubble;
- (id)accountForCurrentPersona;
- (void)updateAccountDisplayName:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isDeviceUnlocked;
- (id)_getOrCreateAccountHandlerForACAccountID:(id)a0;
- (void)loadAccounts;
- (void)createAndLoadSessionWithACAccountID:(id)a0 createBlock:(id /* block */)a1;
- (void)signalUserDefaultsRefresh;
- (void)accountHandler:(id)a0 didChangeSessionTo:(id)a1;
- (void)waitForInitialAccountLoadingWithCompletionHandler:(id /* block */)a0;
- (void)_createSyncBubbleTasksIfNecessary;
- (void)waitForInitialAccountLoadingSynchronously;
- (void).cxx_destruct;
- (id)init;
- (BOOL)retrySyncBubbleLaterIfNeededWithError:(id)a0;
- (void)_garbageCollectOldDomains;
- (id)getOrCreateAccountHandlerForACAccountID:(id)a0;
- (id)waitForAccountLoadingOfDomain:(id)a0;
- (void)waitForAccountLoadingSynchronously:(id)a0;
- (BOOL)destroySessionWithACAccountID:(id)a0;
- (id)personaIdentifierForACAccountID:(id)a0;
- (void)enumerateAccountHandlers:(id /* block */)a0;
- (void)willSwitchUser;
- (void)uploadContent;
- (void)accountHandler:(id)a0 willChangeSessionFrom:(id)a1;
- (void)waitUntilDeviceIsUnlocked;
- (id)accountHandlerForCurrentPersona;
- (id)accountHandlerForACAccountID:(id)a0;
- (id)versionsProviderForVolume:(id)a0;
- (id)accountForPersona:(id)a0;
- (void)createSessionWithACAccountID:(id)a0 dsid:(id)a1 completionHandler:(id /* block */)a2;

@end
