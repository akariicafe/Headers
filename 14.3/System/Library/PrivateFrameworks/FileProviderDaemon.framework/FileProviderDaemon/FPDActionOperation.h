@class FPDRequest, NSError, NSMutableDictionary, FPActionOperationInfo, FPDExtensionManager, NSMutableSet, NSProgress, NSMutableArray;

@interface FPDActionOperation : FPOperation

@property (retain, nonatomic) NSMutableArray *clients;
@property (retain, nonatomic) NSMutableArray *clientCompletions;
@property (nonatomic) BOOL hasFinishedPreflight;
@property (retain, nonatomic) NSMutableDictionary *progressByRoot;
@property (retain, nonatomic) NSMutableDictionary *errorsByRoot;
@property (retain, nonatomic) NSMutableSet *completedRoots;
@property (retain, nonatomic) NSMutableDictionary *createdItemByRoot;
@property (retain, nonatomic) NSMutableDictionary *progressCompletionsByRoot;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long logSection;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, weak, nonatomic) FPDExtensionManager *manager;
@property (readonly, nonatomic) FPDRequest *request;
@property (readonly, nonatomic) FPActionOperationInfo *info;

- (void)cancel;
- (void).cxx_destruct;
- (void)registerFrameworkClient:(id)a0 operationCompletion:(id /* block */)a1;
- (id)progressForRoot:(id)a0 completion:(id /* block */)a1;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)cancelRoot:(id)a0;
- (void)dumpStateTo:(id)a0;
- (id)initWithActionInfo:(id)a0 request:(id)a1 server:(id)a2;
- (void)forAllClients:(id /* block */)a0;
- (void)unregisterClientsAfterCompletion;
- (void)sendPastUpdatesToClient:(id)a0;

@end
