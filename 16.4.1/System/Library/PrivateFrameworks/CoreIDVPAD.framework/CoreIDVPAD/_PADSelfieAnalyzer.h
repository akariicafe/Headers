@class NSObject, PADSelfieAnalyzerRequest, PADSelfieAnalyzerResult;
@protocol OS_dispatch_queue, PADAlgorithms;

@interface _PADSelfieAnalyzer : PADVNSerialRequestsScheduler <PADSelfieAnalyzer> {
    NSObject<OS_dispatch_queue> *_queue;
    id<PADAlgorithms> _algorithms;
    PADSelfieAnalyzerRequest *_request;
    id /* block */ _completion;
}

@property (readonly, nonatomic) PADSelfieAnalyzerResult *result;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)analyzeObservationComposite:(id)a0;
- (id)requestsForFrame:(id)a0 handler:(id /* block */)a1;
- (void)handleObservationCompositeError:(id)a0;
- (void)processRequest:(id)a0 completion:(id /* block */)a1;

@end
