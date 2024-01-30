@class FigWeakReference, NSObject;
@protocol OS_dispatch_queue, BWMRCDetectedResultsObserver;

@interface BWAppClipCodeNode : BWNode {
    struct AppC3DSession { } *_appClipCodeSession;
    BOOL _appC3DAvailable;
    NSObject<OS_dispatch_queue> *_processingQueue;
    FigWeakReference *_weakSelf;
    BOOL _haveInputTransform;
    int _rotationDegrees;
    BOOL _mirroringHorizontal;
    BOOL _mirroringVertical;
    long long _lastAppClipCodeCount;
}

@property (nonatomic) id<BWMRCDetectedResultsObserver> detectedResultsObserver;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)nodeType;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_updateInputRequirements;
- (void)_endAppClipCodeSession;
- (void)_startAppClipCodeSession;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformToDeviceCoordinateSpaceWithUserData:(id)a0;
- (BOOL)_shouldEmitSBufForAppClipCodeCount:(long long)a0 originalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)_pixelFormatsSupportedByAppC3D;
- (id)initWithProcessingQueuePriority:(unsigned int)a0;
- (void)didReceiveAppC3DUpdate:(struct AppC3DTrackingResult { } *)a0 userData:(id)a1;

@end
