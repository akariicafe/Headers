@class NSMutableArray, NSString, FigStateMachine, FigCaptureImageMotionDetector, NSObject, BWFigVideoCaptureDevice;
@protocol OS_dispatch_queue;

@interface BWPreviewTimeMachineSinkNode : BWSinkNode <BWPreviewTimeMachineProcessor> {
    BWFigVideoCaptureDevice *_device;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableArray *_timeMachineFrames;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timeMachineLock;
    int _timeMachineCapacity;
    FigStateMachine *_stateMachine;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _earliestAllowedPTS;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _requestedSuspendPTSRange;
    id /* block */ _suspendCompletionHandler;
    FigCaptureImageMotionDetector *_motionDetector;
    BOOL _faceMotionDetectionEnabled;
    BOOL _smartCameraMotionDetectionEnabled;
    BOOL _haveFrameRotationAndMirror;
    int _frameRotationDegrees;
    BOOL _frameMirrored;
}

@property struct { long long x0; int x1; unsigned int x2; long long x3; } earliestAllowedPTS;
@property (readonly) struct { int x0; int x1; } frameDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:(id)a0 completionHandler:(id /* block */)a1;
- (void)suspendWithPTSRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (id)initWithCaptureDevice:(id)a0 processingQueuePriority:(unsigned int)a1 timeMachineCapacity:(int)a2 smartCameraMotionDetectionEnabled:(BOOL)a3 sinkID:(id)a4;
- (void)resume;

@end
