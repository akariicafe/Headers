@class CKContainer, DRSRapidCloudKitHelper;

@interface DRSCloudKitHelper : NSObject

@property (readonly, nonatomic) long long environment;
@property (readonly, nonatomic) long long rapidEnvironment;
@property (retain, nonatomic) CKContainer *_targetContainer;
@property (readonly, nonatomic) DRSRapidCloudKitHelper *rapidHelper;

+ (id)helperForCKConfig:(id)a0;
+ (id)prodContainerHelper;
+ (id)sandboxContainerHelper;

- (void)uploadRequests:(id)a0 contactDecisionServer:(BOOL)a1 xpcActivity:(id)a2 remainingUploadQuota:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)initWithEnvironment:(long long)a0;
- (void)shouldEnableDataGathering:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (void)shouldUploadRequests:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (void)_configureOperation:(id)a0 container:(id)a1 xpcActivity:(id)a2;
- (id)_requestsPassingUploadSizeCap:(id)a0 remainingQuota:(unsigned long long)a1;
- (void)_sendDecisionServerRequests:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (id)initWithContainerEnvironment:(long long)a0 rapidEnvironment:(long long)a1;
- (BOOL)_handleRAPIDRequests:(id)a0 xpcActivity:(id)a1 errorsOut:(id)a2;
- (void).cxx_destruct;
- (void)reportTerminalRequestStats:(id)a0 xpcActivity:(id)a1 replyHandler:(id /* block */)a2;
- (void)_uploadRecords:(id)a0 containerName:(id)a1 xpcActivity:(id)a2 completionHandler:(id /* block */)a3;

@end
