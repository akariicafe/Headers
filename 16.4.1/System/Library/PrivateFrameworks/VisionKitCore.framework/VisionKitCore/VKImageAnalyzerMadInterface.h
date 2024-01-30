@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, MADService;
@protocol OS_dispatch_queue;

@interface VKImageAnalyzerMadInterface : NSObject

@property (class, readonly, nonatomic) VKImageAnalyzerMadInterface *sharedInterface;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *housekeepingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic) NSMutableOrderedSet *requestQueueProcessing;
@property (retain, nonatomic) NSMutableSet *requestQueueCancelling;
@property (retain, nonatomic) NSMutableDictionary *vkToMadIDs;
@property (retain, nonatomic) NSMutableDictionary *idsToRequests;
@property (nonatomic) int requestIDIndex;
@property (readonly, nonatomic) BOOL hasAnyRequests;
@property (readonly, nonatomic) MADService *service;
@property (retain, nonatomic) MADService *_serviceDontUseThisOneDirectly;
@property (nonatomic) unsigned long long timeoutIndex;
@property (retain, nonatomic) MADService *madService;

+ (id)analyzerDeallocedError;

- (void)cancelAllRequests;
- (void)_cancelRequestID:(int)a0;
- (id)init;
- (id)cancelledError;
- (void).cxx_destruct;
- (void)_cancelRequest:(id)a0;
- (void)cancelRequestID:(int)a0;
- (void)didShowVisualSearchCachedResultsForQueryID:(unsigned long long)a0 cachedResultQueryID:(unsigned long long)a1;
- (id)VNRequestHandlerForRequest:(id)a0;
- (int)_performMADRequest:(id)a0 forRequest:(id)a1 pixelBuffer:(struct __CVBuffer { } *)a2 cgImage:(struct CGImage { } *)a3 useCGForMad:(BOOL)a4 withCompletion:(id /* block */)a5;
- (int)_performMultiStageMADRequest:(id)a0 forRequest:(id)a1 pixelBuffer:(struct __CVBuffer { } *)a2 cgImage:(struct CGImage { } *)a3 useCGForMad:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)_processRequest:(id)a0 callbackQueue:(id)a1;
- (unsigned long long)_statusForRequestID:(int)a0;
- (id)analysisResultFromMadRequests:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 durations:(id)a2;
- (void)clearCompletedRequest:(id)a0;
- (void)createNewIdleTimerIfNecessary;
- (void)didFinishRequest:(id)a0 withAnalysis:(id)a1 analyticsEvent:(id)a2 error:(id)a3;
- (void)didLeaveVisualSearchHints;
- (void)didShowVisualSearchHintsForRequest:(id)a0;
- (id)documentObservationFromRequests:(id)a0 durations:(id)a1;
- (void)generateTextualVisualSearchResultForAnalysis:(id)a0 queryInfo:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateVisualSearchResultForRequest:(id)a0 analysis:(id)a1 items:(id)a2 payload:(id)a3 queryID:(unsigned long long)a4 completionHandler:(id /* block */)a5;
- (void)handleCompletionForMultiPartRequest:(id)a0 madRequests:(id)a1 callbackQueue:(id)a2 error:(id)a3;
- (void)logCollectionsIfNecessary;
- (id)mrcDDElementsFromRequests:(id)a0 didParse:(BOOL *)a1 durations:(id)a2;
- (void)performMADRequest:(id)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (int)processRequest:(id)a0 callbackQueue:(id)a1;
- (id)rectangleObservationsFromRequests:(id)a0 durations:(id)a1;
- (void)removeAndNotifyOfCancelledRequest:(id)a0 completion:(id /* block */)a1;
- (void)request:(id)a0 didCompleteWithAnalysis:(id)a1 analysisEvent:(id)a2 error:(id)a3;
- (id)requestForRequestID:(int)a0;
- (void)setRequest:(id)a0 forRequestID:(int)a1;
- (unsigned long long)statusForRequestID:(int)a0;
- (void)submitVisualIntelligenceUserFeedbackForRequest:(id)a0 reportIdentifier:(id)a1 userFeedbackPayload:(id)a2 sfReportData:(id)a3;
- (id)visualSearchResultFromRequests:(id)a0 durations:(id)a1;

@end
