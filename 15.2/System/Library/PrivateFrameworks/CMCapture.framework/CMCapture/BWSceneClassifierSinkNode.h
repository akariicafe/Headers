@class NSArray, BWInferenceResult, NSObject, BWFigVideoCaptureDevice;
@protocol BWSemanticStyleSceneObserver, BWMRCSceneObserver, OS_dispatch_queue;

@interface BWSceneClassifierSinkNode : BWSinkNode {
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _expectedVersion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resultLock;
    BWInferenceResult *_mostRecentSmartCameraResult;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    BWFigVideoCaptureDevice *_device;
    id<BWMRCSceneObserver> _mrcSceneObserver;
    BOOL _semanticStyleSceneDetectionEnabled;
    id<BWSemanticStyleSceneObserver> _semanticStyleSceneObserver;
    int _semanticStyleSceneType;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _foodScene;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _indoorScene;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _outdoorScene;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _sunsetScene;
    int _maxDebugOverlaySceneCount;
}

@property (nonatomic, setter=setMRCSceneObserver:) id<BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) id<BWSemanticStyleSceneObserver> semanticStyleSceneObserver;
@property (readonly) NSArray *sceneConfidences;

+ (void)initialize;

- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithCaptureDevice:(id)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 semanticStyleSceneDetectionEnabled:(BOOL)a2 sinkID:(id)a3;
- (id)confidenceStringForScene:(id)a0;

@end
