@class _UIHyperInteractor;

@interface _UIPageControlInteractor : NSObject {
    double _scrubbingOffset;
    double _lowerBound;
    double _upperBound;
}

@property (retain, nonatomic) _UIHyperInteractor *interactor;
@property (readonly, nonatomic) double joggingDistance;
@property (readonly, nonatomic) double unconstrainedPosition;
@property (readonly, nonatomic) double boundedScrubPosition;
@property (readonly, nonatomic) double unboundedScrubPosition;
@property (readonly, nonatomic) double hyperConstrainedPosition;

- (void)updateRubberbandLowerBound:(double)a0 upperBound:(double)a1;
- (id)initWithMaximumDistance:(double)a0;
- (void)setUnconstrainedPosition:(double)a0 offset:(double)a1;
- (void)reduceScrubOffsetByOffset:(double)a0;
- (void)commitTranslation;
- (void)setTranslation:(double)a0 velocity:(double)a1;
- (void).cxx_destruct;
- (void)updateScrubLowerBound:(double)a0 upperBound:(double)a1;
- (void)reduceScrubOffsetByRatio:(double)a0;

@end
