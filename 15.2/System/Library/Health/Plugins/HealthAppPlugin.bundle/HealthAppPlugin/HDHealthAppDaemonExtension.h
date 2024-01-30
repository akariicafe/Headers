@class _HKDelayedOperation, NSSet, NSString, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDHealthAppDaemonExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileManagerObserver, HDPostInstallUpdateTaskHandler, HDSharedSummaryManagerObserver, HDSummarySharingEntryObserver, HDProfileExtension, HDHealthDaemonExtension>

@property (retain, nonatomic) HDDaemon *daemon;
@property (retain, nonatomic) NSSet *observedProfileIdentifiers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } observerLock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *debounceQueue;
@property (retain, nonatomic) _HKDelayedOperation *delayedOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDaemon:(id)a0;
- (void)daemonReady:(id)a0;
- (void)sharingEntriesDidUpdate:(id)a0;
- (void)resetProfileObservers;
- (void)sharedSummaryManagerCommittedTransactionsDidChange:(id)a0;
- (void).cxx_destruct;
- (void)profileListDidChange;
- (void)dealloc;
- (void)performPostInstallUpdateTaskForManager:(id)a0 completion:(id /* block */)a1;

@end
