@class PXStoryResourcesDataSource;

@interface PXStoryConcreteTimeline : PXStoryBaseTimeline <NSCopying, NSMutableCopying> {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } _timeRange;
    long long _clipCapacity;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *_clipTimeRanges;
    long long *_clipIndicesSortedByTimeRangeEnd;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_clipFrames;
    struct { long long x0; long long x1; struct CGSize { double x0; double x1; } x2; unsigned long long x3; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x4; long long x5; struct { struct CGSize { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x3; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x4; } x6; struct UIEdgeInsets { double x0; double x1; double x2; double x3; } x7; struct { struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x0; struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; struct { double x0; double x1; double x2; } x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x8; struct { struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x0; struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } x9; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x10; struct { long long x0; float x1; double x2; double x3; double x4; double x5; } x11; } *_clipInfos;
    long long *_clipResourceKinds;
    long long *_clipResourceIndexes;
    long long _segmentCapacity;
    struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *_segmentTimeRanges;
    struct { long long x0; struct { long long x0; BOOL x1; long long x2; double x3; long long x4; } x1; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x3; } *_segmentInfos;
    struct CGSize { double width; double height; } _size;
}

@property (nonatomic) long long numberOfClips;
@property (nonatomic) long long numberOfSegments;
@property (readonly, nonatomic) PXStoryResourcesDataSource *resourcesDataSource;
@property (readonly, nonatomic) long long lastClipIdentifier;

- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (long long)dataSourceIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)debugDescription;
- (id)clipWithIdentifier:(long long)a0;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBlock:(id /* block */)a2;
- (long long)identifierForSegmentAtIndex:(long long)a0;
- (long long)indexOfSegmentWithIdentifier:(long long)a0;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 usingBlock:(id /* block */)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForSegmentWithIdentifier:(long long)a0;
- (id)indexesOfResourcesWithKind:(long long)a0 inResourcesDataSource:(id)a1 forClipsInSegmentWithIdentifier:(long long)a2;
- (long long)indexOfResourceForClipWithIdentifier:(long long)a0 inResourcesDataSource:(id)a1 resourceKind:(long long)a2;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)a0 inResourcesDataSource:(id)a1 resourceKind:(long long)a2;
- (struct { long long x0; struct { long long x0; BOOL x1; long long x2; double x3; long long x4; } x1; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x3; })infoForSegmentWithIdentifier:(long long)a0;
- (long long)identifierOfSegmentClosestToSegmentWithIdentifier:(long long)a0 inTimeline:(id)a1;
- (id)identifiersOfSegmentsMatchingSegmentWithIdentifier:(long long)a0 inTimeline:(id)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 resourcesDataSource:(id)a1;
- (id)initWithTimeline:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_smallestRangeOfClipsPotentiallyIntersectingTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_smallestRangeOfSegmentsPotentiallyIntersectingTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)_clipResourceIndexesOfKind:(long long)a0 inSegmentAtIndex:(long long)a1;
- (id)_indexesOfSegmentsContainingClipsWithResourceKind:(long long)a0 indexes:(id)a1;
- (void)_enumerateSegmentsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 usingBlock:(id /* block */)a1;
- (void)_enumerateClipsWithResourceKind:(long long)a0 indexes:(id)a1 usingBlock:(id /* block */)a2;
- (void)_assertConsistency;
- (void)enumerateConcreteClipsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBlock:(id /* block */)a2;

@end
