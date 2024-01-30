@class FPItem, NSString, NSArray, NSSet, FPItemManager, NSDictionary, FPService, NSProgress, FPStitchingSession;
@protocol FPXOperationService;

@interface FPActionOperation : FPOperation <NSProgressReporting> {
    NSDictionary *_itemsByDomainID;
    NSString *_providerIdentifier;
    BOOL _multiProviders;
    unsigned long long _logSection;
    FPStitchingSession *_stitcher;
    unsigned long long _attemptedRecoveryCount;
}

@property (retain, nonatomic) FPService<FPXOperationService> *remoteService;
@property (readonly, nonatomic) id<FPXOperationService> remoteServiceProxy;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL setupRemoteOperationService;
@property (nonatomic) BOOL haveErrorRecovery;
@property (nonatomic) BOOL havePreflight;
@property (nonatomic) BOOL haveStitching;
@property (copy, nonatomic) NSString *action;
@property (copy, nonatomic) NSArray *sourceItemsToPreflight;
@property (copy, nonatomic) NSSet *sourceItemKeysAllowList;
@property (copy, nonatomic) NSSet *destinationItemKeysAllowList;
@property (copy, nonatomic) FPItem *destinationItemToPreflight;
@property (nonatomic) BOOL finishAfterPreflight;
@property (nonatomic) BOOL skipPreflight;
@property (copy, nonatomic) id /* block */ placeholdersCreationBlock;
@property (copy, nonatomic) id /* block */ actionCompletionBlock;
@property (copy, nonatomic) id /* block */ errorRecoveryHandler;
@property (retain, nonatomic) FPItemManager *itemManager;
@property (readonly, nonatomic) FPStitchingSession *stitcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newArrayRemovingFirstElement:(id)a0;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)operationDescription;
- (void)main;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)initWithProvider:(id)a0 action:(id)a1;
- (void)actionMain;
- (void)presendNotifications;
- (void)resetStitcher;
- (id)initWithItemsOfDifferentProviders:(id)a0 action:(id)a1;
- (void)tryRecoveringFromError:(id)a0 completion:(id /* block */)a1;
- (void)tryRecoveringFromPreflightErrors:(id)a0 recoveryHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)runUserInteractionsPreflight:(id /* block */)a0;
- (void)subclassPreflightWithCompletion:(id /* block */)a0;
- (id)replicateForItems:(id)a0;
- (void)_runUserInteractionsPreflight:(id /* block */)a0;
- (void)_dispatchToSubOperations;
- (void)_preflightAndRun;

@end
