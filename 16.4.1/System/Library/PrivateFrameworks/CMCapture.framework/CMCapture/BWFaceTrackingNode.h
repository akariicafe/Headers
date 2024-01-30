@class BWFigCaptureISPProcessingSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BWFaceTrackingNode : BWNode {
    struct CVAFaceTracking { } *_faceTrackingRef;
    BWFigCaptureISPProcessingSession *_processingSession;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _processingLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_semaphore> *_processingSemaphore;
    BOOL _processing;
    struct opaqueCMSimpleQueue { } *_nextSbufQueue;
    BOOL _setupDone;
    BOOL _structuredLightOccluded;
    int _faceTrackingMachThreadPriority;
    int _pearlModuleType;
    BOOL _addMesh;
    BOOL _addDebugInfo;
}

@property (nonatomic) BOOL frontCamera;
@property (nonatomic) BOOL mirrored;
@property (nonatomic) int orientation;
@property (nonatomic) int maxFaces;
@property (nonatomic) BOOL usesFaceRecognition;
@property (nonatomic) BOOL faceTrackingPlusEnabled;
@property (nonatomic) float networkFailureThresholdMultiplier;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithProcessingSession:(id)a0 figThreadPriority:(unsigned int)a1 pearlModuleType:(int)a2 queueDepth:(int)a3;

@end
