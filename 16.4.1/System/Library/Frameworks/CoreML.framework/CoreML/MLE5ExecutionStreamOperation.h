@class NSString, NSDictionary, NSURL, NSArray;
@protocol MLFeatureProvider;

@interface MLE5ExecutionStreamOperation : NSObject

@property (readonly, copy) NSURL *e5BundleURL;
@property (readonly, copy) NSString *functionName;
@property (readonly) NSDictionary *outputDescriptionsByName;
@property struct e5rt_execution_stream_operation { } *operationHandle;
@property (copy) NSArray *inputPorts;
@property (copy) NSArray *outputPorts;
@property long long state;
@property (retain) id<MLFeatureProvider> inputFeatures;
@property (readonly) id<MLFeatureProvider> outputFeatures;
@property (readonly, copy) NSString *debugLabel;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (struct e5rt_execution_stream_operation { } *)_createOperationAndReturnError:(id *)a0;
- (id)_inputPortNames;
- (id)_newArrayOfBoundedOutputPortsUsingOutputBackings:(id)a0 error:(id *)a1;
- (id)_newArrayOfInputPortsBoundToFeatures:(id)a0 error:(id *)a1;
- (id)_newArrayOfUnboundedPortsForPortNames:(id)a0 featureDescriptionsByName:(id)a1 portFactoryFunction:(void /* function */ *)a2 error:(id *)a3;
- (id)_outputPortNames;
- (id)initWithContentsOfURL:(id)a0 functionName:(id)a1 outputDescriptionsByName:(id)a2 debugLabel:(id)a3;
- (BOOL)prepareAndReturnError:(id *)a0;

@end
