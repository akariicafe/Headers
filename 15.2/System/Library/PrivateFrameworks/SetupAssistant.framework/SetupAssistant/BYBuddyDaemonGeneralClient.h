@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

+ (id /* block */)factory;

- (id)_daemonConnection;
- (void).cxx_destruct;
- (id)init;
- (id)backupMetadata;
- (void)performSilentICDPUpgrade;
- (BOOL)setupAssistantNeedsToRun;
- (void)ensureSilentLoginUpgrade;
- (void)ensureShortLivedTokenUpgrade;
- (void)observeFinishSetupTriggers;
- (void)storeAuthenticationContextforBiometric:(id)a0;
- (void)storeAuthenticationContextforApplyPay:(id)a0;
- (void)getInternalSkipInfo:(id /* block */)a0;
- (void)startExpressSettingsUpload;
- (void)deferDataMigratorExit;
- (void)cancelDataMigratorDeferredExit;
- (void)setInternalShouldSkipFlows:(BOOL)a0 skipExceptions:(id)a1;
- (void)cancelInternalSkipInfo;
- (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1;
- (id)fetchAuthenticationContextForApplePay;
- (id)fetchAuthenticationContextForBiometric;

@end
