@class FigWeakReference, NSObject;
@protocol OS_dispatch_queue, BWMetadataDetectedResultsObserver;

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

@property (nonatomic) id<BWMetadataDetectedResultsObserver> detectedResultsObserver;

+ (void)initialize;

- (void)_updateInputRequirements;
- (id)nodeSubType;
- (id)initWithProcessingQueuePriority:(unsigned int)a0;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)_endAppClipCodeSession;
- (BOOL)_shouldEmitSBufForAppClipCodeCount:(long long)a0 originalPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)didReceiveAppC3DUpdate:(struct AppC3DTrackingResult { } *)a0 userData:(id)a1;
- (void)_startAppClipCodeSession;
- (void)dealloc;
- (id)_pixelFormatsSupportedByAppC3D;

@end
