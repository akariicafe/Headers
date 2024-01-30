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
    BOOL _frontCamera;
    int _orientation;
    BOOL _mirrored;
    int _faceTrackingMachThreadPriority;
    int _pearlModuleType;
    int _faceTrackingMaxFaces;
    BOOL _faceTrackingUsesFaceRecognition;
    BOOL _faceTrackingPlusEnabled;
    BOOL _addMesh;
    BOOL _addDebugInfo;
}

+ (void)initialize;

- (void)setMirrored:(BOOL)a0;
- (id)nodeSubType;
- (void)setFaceTrackingPlusEnabled:(BOOL)a0;
- (BOOL)mirroringEnabled;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (int)orientation;
- (BOOL)faceTrackingPlusEnabled;
- (void)setOrientation:(int)a0;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)maxFaces;
- (void)dealloc;
- (int)_setupCVA;
- (void)_startProcessingSampleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)setFrontCamera:(BOOL)a0;
- (BOOL)frontCamera;
- (void)setMaxFaces:(int)a0;
- (void)setUsesFaceRecognition:(BOOL)a0;
- (BOOL)usesFaceRecognition;
- (id)initWithProcessingSession:(id)a0 figThreadPriority:(unsigned int)a1 pearlModuleType:(int)a2 queueDepth:(int)a3;

@end
