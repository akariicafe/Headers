@class NSString, NSOperationQueue, ACAccountStore, NSObject;
@protocol OS_dispatch_queue, ML3AccountInformationProviding, MLMediaLibraryAccountChangeObserver;

@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <_ML3MultiUserDaemonAccountChangeOperationDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue;
@property (retain, nonatomic) id<ML3AccountInformationProviding> accountInfo;
@property (weak, nonatomic) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (copy, nonatomic) NSString *currentActiveAccountDSID;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setupNotifications;
- (id)_libraryContainerPathForDSID:(id)a0;
- (id)libraryContainerPath;
- (void)_accountStoreDidChangeNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)databasePathForDSID:(id)a0;
- (id)initWithAccountInfo:(id)a0 accountChangeObserver:(id)a1;
- (void)_tearDownNotifications;
- (void)_notifyClients:(id)a0;
- (void)_processAccountChangeNotification;
- (BOOL)shouldExecuteAccountChangeOperation:(id)a0 reason:(id *)a1;
- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)a0 newDatabasePath:(id)a1;

@end
