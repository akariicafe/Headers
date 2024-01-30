@class VNObservationsCache, VNRequestPerformer, NSObject, VNSession;

@interface VNPhotosRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling> {
    VNSession *_session;
    VNRequestPerformer *_requestPerformer;
    VNObservationsCache *_observationsCache;
}

@property (retain) NSObject *modelContextObject;
@property (copy, nonatomic) id /* block */ burstAnalysisLoggingCallback;

+ (void)requestForcedCleanupWithOptions:(id)a0 completion:(id /* block */)a1;
+ (void)forcedCleanup;
+ (void)requestForcedCleanup;
+ (void)requestForcedCleanupWithOptions:(id)a0;
+ (void)forcedCleanupWithOptions:(id)a0;

- (void)cancelAllRequests;
- (id)initWithSession:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)performRequests:(id)a0 error:(id *)a1;
- (BOOL)prepareForPerformingRequestsOfClass:(id)a0 error:(id *)a1;
- (BOOL)prepareForPerformingRequests:(id)a0 error:(id *)a1;
- (BOOL)performRequests:(id)a0 gatheredForensics:(id *)a1 error:(id *)a2;

@end
