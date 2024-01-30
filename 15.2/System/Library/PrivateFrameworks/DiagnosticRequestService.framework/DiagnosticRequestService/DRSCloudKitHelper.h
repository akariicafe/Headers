@class CKContainer;

@interface DRSCloudKitHelper : NSObject

@property (retain, nonatomic) CKContainer *_targetContainer;
@property (readonly, nonatomic) long long environment;

+ (id)sandboxContainerHelper;
+ (id)prodContainerHelper;

- (void)shouldUploadRequests:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (void)uploadRequests:(id)a0 contactDecisionServer:(BOOL)a1 xpcActivity:(id)a2 remainingUploadQuota:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)shouldEnableDataGathering:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (void)_configureOperation:(id)a0 container:(id)a1 xpcActivity:(id)a2;
- (void).cxx_destruct;
- (void)_uploadRecords:(id)a0 xpcActivity:(id)a1 completionHandler:(id /* block */)a2;
- (void)reportTerminalRequestStats:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (id)_requestsPassingUploadSizeCap:(id)a0 remainingQuota:(unsigned long long)a1;
- (void)_sendDecisionServerRequests:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (id)initWithContainer:(id)a0 environment:(long long)a1;

@end
