@interface HUGridBannerCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) double dismissButtonTrailingInset;
@property (nonatomic) double dismissButtonTopInset;
@property (nonatomic) double dismissButtonHeightAndWidth;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
