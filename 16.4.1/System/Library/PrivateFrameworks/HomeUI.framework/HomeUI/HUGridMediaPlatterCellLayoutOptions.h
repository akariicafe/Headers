@interface HUGridMediaPlatterCellLayoutOptions : HUGridCellLayoutOptions

@property (nonatomic) double cellHeight;
@property (nonatomic) double interPlatterSpacing;

+ (id)defaultOptionsForCellSizeSubclass:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
