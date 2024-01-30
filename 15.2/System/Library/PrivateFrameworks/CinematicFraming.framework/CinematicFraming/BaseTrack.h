@class Detection;

@interface BaseTrack : NSObject {
    void *_topMidBoxPointTrack;
    void *_boxSizeTrack;
}

@property (readonly, nonatomic) Detection *lastObservation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } estimatedBoundingBox;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastTimestamp;
@property (readonly, nonatomic) long long identifier;
@property (readonly, nonatomic) long long type;
@property (weak, nonatomic) BaseTrack *pairTrack;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObservation:(id)a0 identifier:(long long)a1 type:(long long)a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (void)addObservation:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
