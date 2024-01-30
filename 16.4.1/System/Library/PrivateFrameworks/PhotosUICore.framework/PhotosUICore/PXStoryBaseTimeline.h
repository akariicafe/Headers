@class NSString;

@interface PXStoryBaseTimeline : NSObject <PXStoryTimeline>

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) long long numberOfSegments;
@property (readonly, nonatomic) long long firstSegmentIdentifier;
@property (readonly, nonatomic) long long lastSegmentIdentifier;
@property (readonly, nonatomic) long long dataSourceIdentifier;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } originalSize;
@property (readonly, nonatomic) NSString *diagnosticDescription;
@property (readonly, nonatomic) NSString *objectiveCCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_findSegmentMatchingIdentifier:(long long)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } *)a1 info:(struct { long long x0; struct { long long x0; BOOL x1; long long x2; double x3; long long x4; } x1; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x3; } *)a2;
- (id)clipWithIdentifier:(long long)a0;
- (id)clipWithResourceKind:(long long)a0 afterClipIdentifier:(long long)a1;
- (BOOL)containsAllSegmentsWithIdentifiers:(id)a0;
- (BOOL)containsSegmentWithIdentifier:(long long)a0;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBlock:(id /* block */)a2;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSegmentWithIdentifier:(long long)a0;
- (long long)identifierForSegmentAtIndex:(long long)a0;
- (long long)identifierForSegmentWithOffset:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 fromEndOfSegmentWithIdentifier:(long long)a1 timeIntoSegment:(out struct { long long x0; int x1; unsigned int x2; long long x3; } *)a2;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)a0 inResourcesDataSource:(id)a1 resourceKind:(long long)a2;
- (long long)identifierOfSegmentClosestToSegmentWithIdentifier:(long long)a0 inTimeline:(id)a1;
- (id)identifiersOfSegmentsMatchingSegmentWithIdentifier:(long long)a0 inTimeline:(id)a1;
- (long long)indexOfResourceForClipWithIdentifier:(long long)a0 inResourcesDataSource:(id)a1 resourceKind:(long long)a2;
- (long long)indexOfSegmentWithIdentifier:(long long)a0;
- (id)indexesOfResourcesWithKind:(long long)a0 inResourcesDataSource:(id)a1 forClipsInSegmentWithIdentifier:(long long)a2;
- (struct { long long x0; struct { long long x0; BOOL x1; long long x2; double x3; long long x4; } x1; struct { char x0; unsigned char x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; char x3; union { char x0; char x1; char x2; char x3; } x4; union { double x0; double x1; char x2; } x5; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; long long x1; } x3; char x4; } x3; })infoForSegmentWithIdentifier:(long long)a0;
- (long long)numberOfClipsWithResourceKind:(long long)a0;
- (id)segmentIdentifiersInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForSegmentWithIdentifier:(long long)a0;

@end
