@class NSString, NSMutableDictionary, NSArray, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PADVNSerialRequestsScheduler : NSObject <PADFrameMonitor> {
    NSMutableDictionary *_currentObservationComposite;
    NSMutableArray *_currentObservationCompositeSet;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _remainingRequests;
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
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)processFrame:(id)a0;
- (void)waitForCurrentFrameProcessingWithCompletion:(id /* block */)a0;
- (BOOL)shouldProcessFrame:(id)a0;
- (void)_dispatchVisionRequestForFrame:(id)a0;
- (void)handleResultForRequest:(id)a0 error:(id)a1;
- (id)requestsForFrame:(id)a0 handler:(id /* block */)a1;
- (void)handleObservationCompositeError:(id)a0;
- (id)observationsFromRequest:(id)a0;
- (void)analyzeObservationComposite:(id)a0;
- (unsigned long long)observationCompositeSetSize;
- (void)analyzeObservationCompositeSet:(id)a0;

@end
