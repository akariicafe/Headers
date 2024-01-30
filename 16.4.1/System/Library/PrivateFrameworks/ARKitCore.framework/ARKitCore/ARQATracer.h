@class NSString, MOVWriterInterface, NSArray, NSOutputStream, NSMutableDictionary, NSDictionary, NSObject, NSMutableData;
@protocol OS_dispatch_queue, ARQATracerDelegate;

@interface ARQATracer : NSObject <ARInternalSessionObserver, ARReplaySensorDelegate> {
    unsigned long long _frameIndex;
    BOOL _isTracing;
    NSMutableDictionary *_traceHeader;
    NSMutableData *_dataBuffer;
    NSOutputStream *_framesStreamToFile;
    NSObject<OS_dispatch_queue> *_processingQueue;
    MOVWriterInterface *_segmentationVideoFileWriter;
    MOVWriterInterface *_semanticsVideoFileWriter;
    struct __CVPixelBufferPool { } *_segmentationYUVPixelBufferPool;
    struct __CVPixelBufferPool { } *_semanticsYUVPixelBufferPool;
    NSObject<OS_dispatch_queue> *_segmentationVideoQueue;
    NSObject<OS_dispatch_queue> *_semanticsVideoQueue;
    struct OpaqueVTPixelTransferSession { } *_segmentationTransferSession;
    NSDictionary *_raycastQueryData;
    NSArray *_raycastResultData;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _additionalResultsLock;
}

@property (retain, nonatomic) NSString *traceOutputFilePath;
@property (nonatomic) BOOL recordScreen;
@property (retain, nonatomic) id screenRecorder;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (nonatomic) BOOL forceQuitApp;
@property (retain) NSMutableDictionary *additionalResults;
@property (weak, nonatomic) id<ARQATracerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;
+ (id)traceOutputDirectory;

- (void)start:(id)a0;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)receiveDefaults;
- (void)writeJSONObjectToStream:(id)a0 prefix:(id)a1;
- (void)update:(id)a0 session:(id)a1;
- (struct __CVBuffer { } *)_createRecordablePixelBufferFromSegmentationBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)_createRecordablePixelBufferFromSemanticsBuffer:(struct __CVBuffer { } *)a0;
- (BOOL)_shouldDumpSemanticData;
- (void)flushDataBufferToFile;
- (BOOL)isSemanticSegmentationDataAvailableForSession:(id)a0;
- (void)replaySensorDidFinishReplayingData;
- (void)trace:(id)a0 forKey:(id)a1;
- (void)traceRaycastQuery:(id)a0;
- (void)traceRaycastResults:(id)a0;
- (void)writeStringToOutputStream:(id)a0;

@end
