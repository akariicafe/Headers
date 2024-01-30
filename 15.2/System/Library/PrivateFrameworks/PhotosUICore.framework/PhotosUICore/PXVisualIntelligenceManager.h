@class NSObject, _PXVisualIntelligenceRequest, VKImageAnalyzer, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXVisualIntelligenceManager : NSObject

@property (class, readonly, nonatomic) PXVisualIntelligenceManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue;
@property (nonatomic) int nextRequestID;
@property (retain, nonatomic) NSMutableArray *requests;
@property (retain, nonatomic) _PXVisualIntelligenceRequest *currentRequest;
@property (retain, nonatomic) VKImageAnalyzer *vkAnalyzer;
@property (nonatomic) BOOL analysisSuspended;

+ (BOOL)canRequestVKImageAnalysisForAsset:(id)a0;

- (void)_cancelRequestByAsset_sync:(id)a0;
- (void)_dispatchNextRequest;
- (void)cancelRequestByAsset:(id)a0;
- (void).cxx_destruct;
- (int)requestVKImageAnalysisForAsset:(id)a0 image:(id)a1 resultHandler:(id /* block */)a2;
- (id)init;
- (void)cancelRequestByID:(int)a0;
- (void)_processAnalysis:(id)a0 withRequest:(id)a1 error:(id)a2;
- (void)_resetCurrentRequestAndDispatchNextRequest;
- (void)_logAnalysis:(id)a0 request:(id)a1 duration:(double)a2 error:(id)a3;

@end
