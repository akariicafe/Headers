@class NSString, NSMutableArray;
@protocol BWFaceDetector;

@interface BWDetectedFacesRingBuffer : NSObject <BWFaceDetector> {
    NSMutableArray *_ringBuffer;
    struct OpaqueFigSimpleMutex { } *_mutex;
    int _depth;
    int _numConsecutiveFramesWithFaces;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastUpdatePTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastStableFacePTS;
}

@property (readonly) id<BWFaceDetector> faceDetector;
@property (readonly) float secondsSinceLastFaceDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flush;
- (void)addFacesFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)dealloc;
- (void)transferFacesToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 totalSensorCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithDepth:(int)a0;

@end
