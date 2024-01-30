@class NSMutableDictionary, NSString, NSMutableOrderedSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface VKImageAnalyzerInProcessMadInterface : VKImageAnalyzerMadInterface

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *housekeepingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tempMadProcessingQueue;
@property (retain, nonatomic) NSMutableOrderedSet *tempMadRequestQueueWaiting;
@property (retain, nonatomic) NSMutableOrderedSet *tempMadRequestQueueProcessing;
@property (retain, nonatomic) NSMutableSet *tempMadRequestQueueCancelling;
@property (retain, nonatomic) NSMutableDictionary *idsToRequests;
@property (nonatomic) int queueRequestID;
@property (readonly, nonatomic) NSString *errorDomain;

+ (id)sharedInterface;

- (void)cancelAllRequests;
- (int)nextRequestID;
- (void)_processRequest:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)cancelledError;
- (void)_cancelRequest:(id)a0;
- (void)cancelRequestID:(int)a0;
- (int)processRequest:(id)a0;
- (unsigned long long)statusForRequestID:(int)a0;
- (unsigned long long)_statusForRequestID:(int)a0;
- (void)clearCompletedRequest:(id)a0;
- (void)addRequestForProcessing:(id)a0;
- (void)removeAndNotifyOfCancelledRequest:(id)a0;
- (void)processNextItemIfNecessary;
- (id)mrcElementsFromImage:(struct CGImage { } *)a0 symbologies:(id)a1;
- (void)didFinishRequest:(id)a0 withAnalysisResult:(id)a1 error:(id)a2;
- (void)request:(id)a0 didCompleteWithAnalysis:(id)a1 error:(id)a2;

@end
