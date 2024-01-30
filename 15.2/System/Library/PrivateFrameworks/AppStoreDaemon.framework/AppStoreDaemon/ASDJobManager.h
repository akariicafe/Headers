@class ASDJobManagerOptions, NSString, NSXPCConnection, NSArray, NSHashTable, NSObject, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ASDJobManager : ASDBaseClient <ASDJobManagerClient, LSApplicationWorkspaceObserverProtocol, NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSArray *_jobs;
    int _launchNotificationToken;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    ASDJobManagerOptions *_options;
    NSMutableSet *_removedJobs;
    BOOL _useLaunchServicesProgress;
    NSObject<OS_dispatch_queue> *_xpcQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_connectToDaemon;
- (void)_setupConnection;
- (void)_sendProgressUpdated:(id)a0;
- (id)initWithOptions:(id)a0;
- (void)finishJobs:(id)a0;
- (void)_getJobsUsingBlock:(id /* block */)a0;
- (void)_handleInterruptedConnection:(id)a0;
- (void)_getJobsWithIDs:(id)a0 usingBlock:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_invalidate;
- (void)applicationInstallsDidChange:(id)a0;
- (void)didCompleteJobs:(id)a0;
- (void)_willFinishJobs:(id)a0;
- (id)_mapAllJobsToIDs;
- (void)getJobsWithIDs:(id)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)didChangeJobs:(id)a0;
- (void)_sendStatesUpdated:(id)a0;
- (id)init;
- (void)didCompleteJobs:(id)a0 finalPhases:(id)a1;
- (BOOL)_shouldAutomaticallyReconnect;
- (void)_sendJobsCompleted:(id)a0;
- (void)cancelJobsWithIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)_sendJobsChanged:(id)a0;
- (void)_handleInvalidatedConnection:(id)a0;
- (void)resumeJobsWithIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)invalidate;
- (void)_finishJobsWithIDs:(id)a0;
- (void)_registerManagerWithOptions:(id)a0;
- (void)dealloc;
- (void)_applyUpdates:(id)a0 usingBlock:(id /* block */)a1;
- (void)pauseJobsWithIDs:(id)a0 completionBlock:(id /* block */)a1;
- (void)_updateActiveIDs:(id)a0;
- (void)didUpdateProgress:(id)a0;
- (void)getJobsUsingBlock:(id /* block */)a0;
- (void)didUpdateStates:(id)a0;

@end
