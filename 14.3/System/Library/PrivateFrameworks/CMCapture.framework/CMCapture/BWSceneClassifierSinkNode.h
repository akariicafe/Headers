@class NSArray, NSString, BWInferenceResult, NSObject, BWFigVideoCaptureDevice;
@protocol OS_dispatch_queue, BWMRCSceneObserver;

@interface BWSceneClassifierSinkNode : BWSinkNode {
    struct { unsigned short major; unsigned short minor; unsigned short patch; } _expectedVersion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resultLock;
    BWInferenceResult *_mostRecentSmartCameraResult;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    BWFigVideoCaptureDevice *_device;
    id<BWMRCSceneObserver> _mrcSceneObserver;
    int _maxDebugOverlaySceneCount;
}

@property (nonatomic, setter=setMRCSceneObserver:) id<BWMRCSceneObserver> mrcSceneObserver;
@property (readonly) NSArray *sceneConfidences;
@property (readonly) NSString *brightStageSceneConfidence;
@property (readonly) NSString *sunsetSunriseSceneConfidence;
@property (readonly) NSString *petSceneConfidence;
@property (readonly) NSString *babySceneConfidence;
@property (readonly) NSString *qrSceneConfidence;
@property (readonly) NSString *documentSceneConfidence;

+ (void)initialize;

- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)_stringRepresentationOfMostRecentInferenceForKey:(id)a0;
- (id)initWithCaptureDevice:(id)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 sinkID:(id)a2;

@end
