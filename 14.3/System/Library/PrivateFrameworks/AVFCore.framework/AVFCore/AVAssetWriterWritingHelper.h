@class NSString, AVAssetWriterFigAssetWriterNotificationHandler, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate> {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    BOOL _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
    void *_callbackContextToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)prepareInputsOperationsWithInputs:(id)a0;
+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0;
+ (id)finishWritingDelegateOperationWithAssetWriter:(id)a0 andFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a1 andDelegate:(id)a2;

- (void)cancelWriting;
- (id)initWithConfigurationState:(id)a0;
- (void)dealloc;
- (BOOL)checkAVAssetWriterInputConfigurationToOutputSegmentDataForOutputFileTypeProfile:(id)a0 preferredOutputSegmentInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 returningDebugDescription:(id *)a2;
- (id)initWithConfigurationState:(id)a0 error:(id *)a1;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)a0 error:(id)a1;
- (void)flushSegment;
- (void)flush;
- (void)finishWritingWithCompletionHandler:(id /* block */)a0;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)a0;
- (struct OpaqueFigAssetWriter { } *)_retainedFigAssetWriter;
- (id)figTrackReferences;
- (void)endSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)startSessionAtSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (long long)status;
- (void)finishWriting;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)a0;
- (BOOL)checkConfigurationToOutputSegmentDataReturningDebugDescription:(id *)a0;

@end
