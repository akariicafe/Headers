@interface PXStoryRelatedLayoutMetrics : PXLayoutMetrics

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long layoutMode;
@property (nonatomic) struct CGPoint { double x; double y; } scrollOffset;
@property (nonatomic) double offscreenFraction;
@property (nonatomic) unsigned long long userInterfaceDirection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
