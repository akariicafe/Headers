@class PADModelLoader, NSString, NSObject, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue, PADAlgorithms;

@interface _PADPrintReplayDetector : PADVNSerialRequestsScheduler <PADPrintReplayDetector> {
    id<PADAlgorithms> _algorithms;
    PADModelLoader *_models;
    double _currentFrameTimestamp;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSNumber *assessment;
@property (retain, nonatomic) NSMutableArray *assessmentsPRD;
@property (readonly, nonatomic) NSNumber *fakeAssessment;
@property (readonly, nonatomic) NSNumber *liveAssessment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)analyzeObservationComposite:(id)a0;
- (id)requestsForFrame:(id)a0 handler:(id /* block */)a1;
- (void)analyzeObservationCompositeSet:(id)a0;
- (void)handleObservationCompositeError:(id)a0;
- (id)init:(id)a0 models:(id)a1;
- (BOOL)shouldProcessFrame:(id)a0;

@end
