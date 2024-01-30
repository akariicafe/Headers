@interface PXStoryVisionSaliencyArea : PXStoryConcreteSaliencyArea

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRegionOfInterest;

- (id)initWithContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confidence:(float)a1;
- (id)initWithContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 confidence:(float)a1 type:(long long)a2 sourceRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
