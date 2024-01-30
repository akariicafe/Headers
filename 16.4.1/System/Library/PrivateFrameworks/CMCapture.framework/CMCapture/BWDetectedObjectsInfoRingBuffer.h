@class NSString, NSMutableArray;
@protocol BWObjectDetector;

@interface BWDetectedObjectsInfoRingBuffer : NSObject <BWObjectDetector> {
    NSMutableArray *_ringBuffer;
    struct OpaqueFigSimpleMutex { } *_mutex;
    int _depth;
    int _numConsecutiveFramesWithObjects;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastUpdatePTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastStableObjectPTS;
}

@property (readonly) id<BWObjectDetector> objectDetector;
@property (readonly) float secondsSinceLastObjectDetected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)flush;
- (void)transferObjectsToSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 totalSensorCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dealloc;
- (id)initWithRingBufferDepth:(int)a0;
- (void)addObjectsFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)objectsForPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
