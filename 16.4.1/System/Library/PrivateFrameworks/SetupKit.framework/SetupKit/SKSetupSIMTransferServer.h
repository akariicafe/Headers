@class CBServer, CBAdvertiser;

@interface SKSetupSIMTransferServer : SKSetupBase {
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
}

@property (nonatomic) BOOL useSecondTrigger;

- (void)_run;
- (void)_activate;
- (id)descriptionWithLevel:(int)a0;
- (id)init;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleServerAcceptConnecton:(id)a0;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_oobEnsureStarted;

@end
