@protocol PXStoryTimeline;

@interface _PXStoryScrollPositionReference : NSObject

@property (readonly, nonatomic) id<PXStoryTimeline> timeline;
@property (readonly, nonatomic) struct { long long firstSegmentIdentifier; double secondSegmentMixFactor; long long secondSegmentIdentifier; } scrollPosition;

- (id)init;
- (void).cxx_destruct;
- (id)initWithScrollPosition:(struct { long long x0; double x1; long long x2; })a0;

@end
