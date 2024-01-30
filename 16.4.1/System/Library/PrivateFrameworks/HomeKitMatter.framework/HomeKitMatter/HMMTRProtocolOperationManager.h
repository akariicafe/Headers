@class NSString;

@interface HMMTRProtocolOperationManager : HMFObject <HMFLogging>

@property (class, readonly) HMMTRProtocolOperationManager *sharedInstance;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)_addArgumentsToInvocation:(id)a0 primaryArgument:(id)a1 completionHandlerArgument:(id /* block */)a2 characteristicDescriptor:(id)a3 forCharacteristic:(id)a4;
- (void)_addArgumentsToInvocation:(id)a0 primaryArgument:(id)a1 expectedValues:(id)a2 expectedValueInterval:(id)a3 completionHandlerArgument:(id /* block */)a4 characteristicDescriptor:(id)a5 forCharacteristic:(id)a6;
- (void)_addParamsToInvocation:(id)a0 paramsObject:(id)a1 completionHandlerArgument:(id)a2 characteristicDescriptor:(id)a3 forCharacteristic:(id)a4;
- (void)_addParamsToInvocation:(id)a0 paramsObject:(id)a1 expectedValues:(id)a2 expectedValueInterval:(id)a3 completionHandlerArgument:(id)a4 characteristicDescriptor:(id)a5 forCharacteristic:(id)a6;
- (BOOL)_isBasicClusterOperationForBridgedDevice:(Class)a0 endpointID:(unsigned long long)a1;
- (id)_processGenericResponseForOperation:(id)a0 responseValues:(id)a1 responseError:(id)a2;
- (id)_processReadResponseForOperation:(id)a0 readResponseValues:(id)a1 readResponseError:(id)a2;
- (id)_processResponseForOperation:(id)a0 responseValues:(id)a1 responseError:(id)a2;
- (id)_processWriteResponseForOperation:(id)a0 writeResponseValues:(id)a1 writeResponseError:(id)a2;
- (id)_responseTupleWithMappedValueForOperation:(id)a0 responseValue:(id)a1 responseError:(id)a2;
- (void)handleIdentifyDeviceWriteWithOperation:(id)a0 clientQueue:(id)a1 operationResponseHandler:(id /* block */)a2;
- (void)handleLockTargetStateWriteWithOperation:(id)a0 clientQueue:(id)a1 operationResponseHandler:(id /* block */)a2;
- (BOOL)handleSpecialCaseCharacteristicWithOperation:(id)a0 clientQueue:(id)a1 operationResponseHandler:(id /* block */)a2;
- (void)registerOperation:(id)a0 clientQueue:(id)a1 operationResponseHandler:(id /* block */)a2;

@end
