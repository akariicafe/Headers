@class NSObject, VKCImageAnalyzer, _PXVisualIntelligenceRequest, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXVisualIntelligenceManager : NSObject

@property (class, readonly, nonatomic) BOOL deviceSupportsImageAnalysis;
@property (class, readonly, nonatomic) PXVisualIntelligenceManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue;
@property (nonatomic) int nextRequestID;
@property (retain, nonatomic) NSMutableArray *requests;
@property (retain, nonatomic) _PXVisualIntelligenceRequest *currentRequest;
@property (retain, nonatomic) VKCImageAnalyzer *vkAnalyzer;
@property (nonatomic) BOOL analysisSuspended;

+ (struct CGSize { double x0; double x1; })_sizeToPreheatResourcesForSubjectExtractionOfAsset:(id)a0;
+ (BOOL)canRequestVKImageAnalysisForAsset:(id)a0;
+ (int)preheatResourcesForSubjectExtractionOfAsset:(id)a0;

- (void)_logAnalysis:(id)a0 request:(id)a1 duration:(double)a2 error:(id)a3;
- (int)requestVKImageAnalysisForAsset:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(long long)a2 resultHandler:(id /* block */)a3;
- (int)requestVKImageAnalysisForAsset:(id)a0 image:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestVKImageAnalysisForAsset:(id)a0 cgImage:(struct CGImage { } *)a1 orientation:(long long)a2 resultHandler:(id /* block */)a3;
- (void)_cancelRequestByAsset_sync:(id)a0;
- (void)cancelRequestByAsset:(id)a0;
- (void)_dispatchNextRequest;
- (void)_resetCurrentRequestAndDispatchNextRequest;
- (int)requestVKImageAnalysisForAsset:(id)a0 resultHandler:(id /* block */)a1;
- (id)init;
- (void)_processAnalysis:(id)a0 withRequest:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)cancelRequestByID:(int)a0;

@end
