@class ASVRubberBand;

@interface ASVRubberBandedSpinDeceleration : ASVDampingDeceleration

@property (nonatomic) float currentOffset;
@property (nonatomic) float previousRubberBandedOffset;
@property (retain, nonatomic) ASVRubberBand *rubberBand;

- (void).cxx_destruct;
- (float)decelerationDelta;
- (id)initWithVelocity:(float)a0 minEndDelta:(float)a1 startingOffset:(float)a2 decelerationRate:(float)a3 rubberBand:(id)a4;

@end
