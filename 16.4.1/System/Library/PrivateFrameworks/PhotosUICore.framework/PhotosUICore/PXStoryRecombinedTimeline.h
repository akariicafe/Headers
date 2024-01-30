@class PXCArrayStore;
@protocol PXStoryTimeline;

@interface PXStoryRecombinedTimeline : PXStoryBaseTimeline

@property (readonly, nonatomic) id<PXStoryTimeline> sourceTimeline;
@property (readonly, nonatomic) long long lastSourceSegmentIndex;
@property (readonly, nonatomic) id<PXStoryTimeline> targetTimeline;
@property (readonly, nonatomic) long long firstTargetSegmentIndex;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } sourceTimeRange;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } targetTimeRangeInSourceTime;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } targetTimeRange;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } targetTimeOffset;
@property (readonly, nonatomic) PXCArrayStore *shiftedTimeRangesStore;

+ (BOOL)_isSegmentIndex:(long long)a0 inTimeline:(id)a1 visuallyEqualToSegmentIndex:(long long)a2 inTimeline:(id)a3;
+ (id)timelineByRecombiningSourceTimeline:(id)a0 withTargetTimeline:(id)a1 visibleSegmentIdentifiers:(id)a2;

- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (id)init;
- (long long)dataSourceIdentifier;
- (struct CGSize { double x0; double x1; })size;
- (void).cxx_destruct;
- (long long)numberOfSegments;
- (void)_shiftTimeRanges:(const struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a0 count:(long long)a1 byTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 resultHandler:(id /* block */)a3;
- (id)clipWithIdentifier:(long long)a0;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBlock:(id /* block */)a2;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSegmentWithIdentifier:(long long)a0;
- (long long)identifierForSegmentAtIndex:(long long)a0;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)a0 inResourcesDataSource:(id)a1 resourceKind:(long long)a2;
- (long long)indexOfResourceForClipWithIdentifier:(long long)a0 inResourcesDataSource:(id)a1 resourceKind:(long long)a2;
- (long long)indexOfSegmentWithIdentifier:(long long)a0;
- (id)indexesOfResourcesWithKind:(long long)a0 inResourcesDataSource:(id)a1 forClipsInSegmentWithIdentifier:(long long)a2;
- (id)initWithSourceTimeline:(id)a0 upToSegmentIndex:(long long)a1 targetTimeline:(id)a2 fromSegmentIndex:(long long)a3;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForSegmentWithIdentifier:(long long)a0;

@end
