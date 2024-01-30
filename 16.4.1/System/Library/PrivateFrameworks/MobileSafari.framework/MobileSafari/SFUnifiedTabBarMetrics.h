@interface SFUnifiedTabBarMetrics : SFUnifiedBarMetrics

@property (nonatomic) unsigned long long sizeClass;
@property (readonly, nonatomic) double insetToRevealNextItem;
@property (readonly, nonatomic) double maximumActiveItemWidth;
@property (readonly, nonatomic) double minimumActiveItemWidth;
@property (readonly, nonatomic) double minimumActiveItemWidthRatio;
@property (readonly, nonatomic) double minimumInactiveItemWidth;

+ (double)minimumActiveItemWidthForSizeClass:(unsigned long long)a0;
+ (double)minimumInactiveItemWidthForSizeClass:(unsigned long long)a0;

- (double)maximumItemSpacing;
- (double)minimumItemSpacing;

@end
