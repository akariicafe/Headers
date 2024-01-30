@interface GKDynamicColumnSectionMetrics : GKSectionMetrics

@property (nonatomic) unsigned long long columnsInPortrait;
@property (nonatomic) unsigned long long columnsInLandscape;

+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)a0 columnsInLandscape:(unsigned long long)a1;
+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)a0 columnsInLandscape:(unsigned long long)a1 forIdiom:(long long)a2;

- (id)initWithIdiom:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })itemSizeForCollectionView:(id)a0;
- (void)updateColumnsInPortrait:(unsigned long long)a0 columnsInLandscape:(unsigned long long)a1;

@end
