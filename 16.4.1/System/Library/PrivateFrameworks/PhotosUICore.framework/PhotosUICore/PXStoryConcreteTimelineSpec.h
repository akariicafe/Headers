@interface PXStoryConcreteTimelineSpec : PXFeatureSpec <PXStoryTimelineSpec>

@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) double nUpDividerWidth;
@property (readonly, nonatomic) long long layoutDirection;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
