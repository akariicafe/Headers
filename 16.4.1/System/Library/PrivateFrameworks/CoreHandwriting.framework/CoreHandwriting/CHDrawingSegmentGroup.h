@class NSArray;

@interface CHDrawingSegmentGroup : NSObject

@property (readonly, nonatomic) long long segmentGroupIndex;
@property (readonly, nonatomic) NSArray *segments;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly, nonatomic) long long totalSegmentCount;

- (void).cxx_destruct;
- (id)initWithSegmentGroupIndex:(long long)a0 segments:(id)a1;

@end
