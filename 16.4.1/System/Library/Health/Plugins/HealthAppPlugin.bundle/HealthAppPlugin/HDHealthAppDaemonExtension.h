@class _HKDelayedOperation, NSSet, IDSService, NSString, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDHealthAppDaemonExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileManagerObserver, HDPostInstallUpdateTaskHandler, HDSharedSummaryManagerObserver, HDSummarySharingEntryObserver, IDSServiceDelegate, HDProfileExtension, HDHealthDaemonExtension>

@property (retain, nonatomic) HDDaemon *daemon;
@property (retain, nonatomic) NSSet *observedProfileIdentifiers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observerLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (retain, nonatomic) IDSService *notificationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileListDidChange;
- (id)initWithDaemon:(id)a0;
- (void)service:(id)a0 account:(id)a1 incomingData:(id)a2 fromID:(id)a3 context:(id)a4;
- (void)daemonReady:(id)a0;
- (void)sharingEntriesDidUpdate:(id)a0;
- (void)resetProfileObservers;
- (void)dealloc;
- (void)performPostInstallUpdateTaskForManager:(id)a0 completion:(id /* block */)a1;
- (void)sharedSummaryManagerCommittedTransactionsDidChange:(id)a0;
- (void)fireNewDeviceAddedPushNotificationWithDeviceInfo:(id)a0;
- (void).cxx_destruct;

@end
