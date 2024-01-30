@interface CHIPPluginProtocolOperationManager : NSObject

+ (id)sharedInstance;

- (id)_processResponseForOperation:(id)a0 responseValues:(id)a1 responseError:(id)a2;
- (void)_addArgumentsToInvocation:(id)a0 primaryArgument:(id)a1 completionHandlerArgument:(id /* block */)a2 characteristicDescriptor:(id)a3 forCharacteristic:(id)a4;
- (id)_processReadResponseForOperation:(id)a0 readResponseValues:(id)a1 readResponseError:(id)a2;
- (id)_processWriteResponseForOperation:(id)a0 writeResponseValues:(id)a1 writeResponseError:(id)a2;
- (id)_processGenericResponseForOperation:(id)a0 responseValues:(id)a1 responseError:(id)a2;
- (id)_responseTupleWithMappedValueForOperation:(id)a0 responseValue:(id)a1 responseError:(id)a2;
- (void)registerOperation:(id)a0 clientQueue:(id)a1 operationResponseHandler:(id /* block */)a2;

@end
