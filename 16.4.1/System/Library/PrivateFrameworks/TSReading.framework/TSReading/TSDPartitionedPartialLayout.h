@class TSDDefaultPartitioner;

@interface TSDPartitionedPartialLayout : TSDLayout

@property (readonly, nonatomic) TSDDefaultPartitioner *partitioner;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;

- (id)computeLayoutGeometry;
- (Class)repClassOverride;
- (id)initWithInfo:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 partitioner:(id)a2;

@end
