@class BWFigCaptureISPProcessingSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BWFaceTrackingNode : BWNode {
    struct CVAFaceKit { } *_faceKitRef;
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
    int _faceKitMachThreadPriority;
    BOOL _faceKitRGBOnly;
    int _faceKitMaxFaces;
    BOOL _faceKitUsesFaceRecognition;
    BOOL _addMesh;
    BOOL _addDebugInfo;
}

+ (void)initialize;

- (void)setMirrored:(BOOL)a0;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (int)_setupCVA;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (int)maxFaces;
- (BOOL)frontCamera;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_startProcessingSampleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)setFrontCamera:(BOOL)a0;
- (void)setMaxFaces:(int)a0;
- (void)setUsesFaceRecognition:(BOOL)a0;
- (BOOL)usesFaceRecognition;
- (id)initWithProcessingSession:(id)a0 figThreadPriority:(unsigned int)a1 useDepth:(BOOL)a2 queueDepth:(int)a3;
- (int)orientation;
- (BOOL)mirroringEnabled;
- (void)setOrientation:(int)a0;

@end
