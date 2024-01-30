@class NSError, NSString, NSMutableDictionary, PADCounter, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PADVNSerialRequestsScheduler : NSObject <PADFrameMonitor> {
    NSMutableDictionary *_currentObservationComposite;
    NSMutableArray *_currentObservationCompositeSet;
    NSObject<OS_dispatch_queue> *_queue;
    PADCounter *_remainingRequests;
    NSArray *_requests;
    NSError *_requestError;
    BOOL _isProcessingFrame;
    id /* block */ _currentFrameProcessingCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)processFrame:(id)a0;
- (void)analyzeObservationComposite:(id)a0;
- (id)requestsForFrame:(id)a0 handler:(id /* block */)a1;
- (void)_dispatchVisionRequestForFrame:(id)a0;
- (void)analyzeObservationCompositeSet:(id)a0;
- (void)handleObservationCompositeError:(id)a0;
- (void)handleResultForRequest:(id)a0 error:(id)a1;
- (unsigned long long)observationCompositeSetSize;
- (id)observationsFromRequest:(id)a0;
- (BOOL)shouldProcessFrame:(id)a0;
- (void)waitForCurrentFrameProcessingWithCompletion:(id /* block */)a0;

@end
