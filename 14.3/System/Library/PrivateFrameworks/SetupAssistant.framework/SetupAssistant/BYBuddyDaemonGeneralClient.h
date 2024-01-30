@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

+ (id /* block */)factory;

- (id)backupMetadata;
- (id)_daemonConnection;
- (id)init;
- (void).cxx_destruct;
- (void)getInternalSkipInfo:(id /* block */)a0;
- (void)deferDataMigratorExit;
- (BOOL)setupAssistantNeedsToRun;
- (void)ensureSilentLoginUpgrade;
- (void)ensureShortLivedTokenUpgrade;
- (void)observeFinishSetupTriggers;
- (void)performSilentICDPUpgrade;
- (void)cancelDataMigratorDeferredExit;
- (void)setInternalShouldSkipFlows:(BOOL)a0 skipExceptions:(id)a1;
- (void)cancelInternalSkipInfo;

@end
