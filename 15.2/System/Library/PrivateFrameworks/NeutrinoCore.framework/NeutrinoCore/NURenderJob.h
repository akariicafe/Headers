@class CIImage, NUComposition, NSDate, AVAudioMix, NSMutableString, NSObject, NUObservatory, NURenderPipeline, NUGeometrySpaceMap, AVVideoComposition, NSString, NURenderJobStatistics, NUPriority, AVComposition, NURenderRequest, NURenderNode, NUImageGeometry, NSArray, NSError;
@protocol OS_dispatch_group, OS_dispatch_queue, NUExtentPolicy, NUScalePolicy, NUDevice;

@interface NURenderJob : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NUObservatory *_observatory;
    NSError *_error;
    BOOL _failed;
    BOOL _replySynchronous;
    BOOL _didRespond;
    NSString *_memoizationCacheKey;
}

@property (readonly, nonatomic) NSMutableString *additionalDebugInfo;
@property (nonatomic) BOOL shouldWriteJobDebugFile;
@property (retain, nonatomic) NSString *nodeCacheAtStartOfJob;
@property (readonly, nonatomic) id<NUDevice> device;
@property (readonly, nonatomic) int rendererType;
@property (retain, nonatomic) NUComposition *composition;
@property (retain, nonatomic) NURenderPipeline *renderPipeline;
@property (retain, nonatomic) NURenderNode *prepareNode;
@property (nonatomic) struct { long long numerator; long long denominator; } renderScale;
@property (retain, nonatomic) NURenderNode *renderNode;
@property (retain, nonatomic) NUGeometrySpaceMap *resolvedSpaceMap;
@property (retain, nonatomic) NUImageGeometry *outputGeometry;
@property (retain, nonatomic) NUImageGeometry *fullSizeGeometry;
@property (retain, nonatomic) CIImage *outputImage;
@property (retain, nonatomic) AVComposition *outputVideo;
@property (retain, nonatomic) AVVideoComposition *outputVideoComposition;
@property (retain, nonatomic) AVAudioMix *outputAudioMix;
@property (readonly, nonatomic) NURenderJobStatistics *statistics;
@property (readonly, nonatomic) NSDate *jobCreationDate;
@property (retain) NSArray *dependentJobs;
@property (readonly, nonatomic) BOOL wantsOutputGeometry;
@property (readonly, nonatomic) BOOL wantsOutputImage;
@property (readonly, nonatomic) BOOL wantsOutputVideoFrame;
@property (readonly, nonatomic) BOOL wantsOutputVideo;
@property (readonly, nonatomic) BOOL wantsRenderStage;
@property (readonly, nonatomic) BOOL wantsCompleteStage;
@property (readonly, nonatomic) BOOL wantsPrepareNodeCached;
@property (readonly, nonatomic) BOOL wantsRenderNodeCached;
@property (readonly, nonatomic) BOOL wantsRenderScaleClampedToNativeScale;
@property (readonly) NURenderRequest *request;
@property (readonly) NUPriority *priority;
@property (readonly) unsigned long long jobNumber;
@property (readonly) long long currentStage;
@property (readonly) BOOL isExecuting;
@property (readonly) BOOL isCanceled;
@property (readonly) BOOL isAborted;
@property (readonly) BOOL isFinished;
@property (readonly) BOOL succeeded;
@property (readonly) struct { long long x0; long long x1; } imageSize;
@property (readonly) id<NUScalePolicy> scalePolicy;
@property (readonly) id<NUExtentPolicy> extentPolicy;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *replyGroup;
@property (readonly) NSError *error;
@property (readonly) BOOL failed;

+ (void)initialize;
+ (void)flushCache;

- (void)finish;
- (id)initWithRequest:(id)a0;
- (void)run:(long long)a0;
- (void)_resume;
- (void)_run:(long long)a0;
- (void)_finish;
- (id)cacheKey;
- (void)removeObserver:(id)a0;
- (BOOL)render:(out id *)a0;
- (BOOL)succeeded;
- (void)didRun;
- (void)reply:(id)a0;
- (id)description;
- (void)finalize:(BOOL)a0;
- (void)cleanUp;
- (void).cxx_destruct;
- (void)_cancel;
- (id)init;
- (void)fail:(id)a0;
- (void)pause;
- (long long)willRun;
- (void)respond;
- (void)_reply:(id)a0;
- (void)_pause;
- (BOOL)complete:(out id *)a0;
- (void)resume;
- (id)error;
- (BOOL)failed;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (void)cancel;
- (void)_didPrepare;
- (id)renderer:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)generateVideoComposition:(out id *)a0;
- (id)_memoizationCacheKey;
- (void)runSynchronous;
- (void)runToPrepareSynchronous;
- (long long)resolvedSampleMode:(long long)a0;
- (void)_emitSignpostEventType:(unsigned char)a0 forStage:(long long)a1 duration:(double)a2;
- (BOOL)runStage:(long long)a0 error:(out id *)a1;
- (long long)_nextStageForStage:(long long)a0;
- (BOOL)_shouldWaitForDependentJobs;
- (BOOL)_shouldCancelCoalescedJob;
- (BOOL)cancelCoalescedJob;
- (BOOL)_cancelCoalescedJob;
- (struct { BOOL x0; BOOL x1; BOOL x2; })_atomicCancel;
- (void)abortStage:(long long)a0;
- (void)abortPrepare;
- (void)abortRender;
- (void)abortComplete;
- (void)_setCurrentStage:(long long)a0;
- (BOOL)_checkForMemoizedResult;
- (void)_memoizeResult:(id)a0;
- (id)validateComposition:(out id *)a0;
- (id)pipelineForComposition:(id)a0 error:(out id *)a1;
- (id)prepareNodeWithPipelineState:(id)a0 error:(out id *)a1;
- (id)evaluateComposition:(id)a0 pipeline:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)evaluateOutputGeometry:(out id *)a0;
- (id)renderNodeWithPipelineState:(id)a0 error:(out id *)a1;
- (void)addStageObserver:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)addCancelObserver:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)_notifyStageTransition:(long long)a0;
- (void)_notifyCanceled:(long long)a0;
- (id)renderImage:(id)a0 into:(id)a1 colorSpace:(id)a2 roi:(id)a3 imageSize:(struct { long long x0; long long x1; })a4 error:(out id *)a5;
- (BOOL)renderVideoFrames:(id)a0 videoMetadataSamples:(id)a1 intoPixelBuffer:(struct __CVBuffer { } *)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 colorSpace:(id)a4 error:(out id *)a5;
- (void)renderJobDebugInit;
- (void)renderJobDebugCanceled;
- (void)renderJobDebugResponded;
- (BOOL)shouldWriteTombstone;
- (void)writeRenderJobDebugTombstone;
- (BOOL)shouldWriteCanceledJob;
- (void)writeRenderDebugFileToDisk;
- (id)debugFilePath;

@end
