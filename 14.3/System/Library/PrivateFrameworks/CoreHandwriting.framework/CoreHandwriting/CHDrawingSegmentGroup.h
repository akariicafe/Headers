@class NSArray;

@interface CHDrawingSegmentGroup : NSObject

@property (readonly, nonatomic) long long segmentGroupIndex;
@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) NSArray *delayedSegments;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) long long totalSegmentCount;

+ (id)segmentGroupsFromSegments:(id)a0 delayedSegments:(id)a1 segmentGroupRanges:(id)a2;

- (void)dealloc;
- (id)initWithSegmentGroupIndex:(long long)a0 segments:(id)a1 delayedSegments:(id)a2;

@end
