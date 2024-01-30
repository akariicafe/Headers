@class NSString, NSData, NSURL, NSError, CKCodeFunctionInvokeOperationInfo;
@protocol CKCodeFunctionInvokeOperationCallbacks;

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation <CKCodeFunctionInvokeOperationCallbacks>

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSData *serializedRequest;
@property (nonatomic) BOOL local;
@property (copy, nonatomic) NSURL *clientRuntimeProvidedServiceURL;
@property (nonatomic) BOOL shouldFetchAssetContentInMemory;
@property (copy, nonatomic) NSData *serializedResponse;
@property (retain, nonatomic) NSError *responseError;
@property (readonly, nonatomic) id<CKCodeFunctionInvokeOperationCallbacks> clientOperationCallbackProxy;
@property (readonly, nonatomic) CKCodeFunctionInvokeOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ functionInvokeCompletionBlock;

+ (void)applyDaemonCallbackInterfaceTweaks:(id)a0;

- (void)performCKOperation;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillOutOperationInfo:(id)a0;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)a0;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (void)handleReplaceLocalWithWireSerializations:(id)a0 encryptedMasterKeys:(id)a1 wireEnvelopes:(id)a2 reply:(id /* block */)a3;
- (void)handleReplaceWireSerializationsWithRecords:(id)a0;
- (id)initWithServiceName:(id)a0 functionName:(id)a1 serializedRequest:(id)a2 local:(BOOL)a3;
- (id)initWithServiceName:(id)a0 functionName:(id)a1 serializedRequest:(id)a2;
- (id)initWithServiceName:(id)a0 functionName:(id)a1 serializedParameters:(id)a2 local:(BOOL)a3;
- (id)initWithServiceName:(id)a0 functionName:(id)a1 serializedParameters:(id)a2;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)handleInitialResponseReceived:(id)a0 reply:(id /* block */)a1;

@end
