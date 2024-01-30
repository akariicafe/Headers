@interface PXCMMLayoutGenerator : PXLayoutGenerator

+ (id)_defaultEditorialLayoutGeneratorWithReferenceSize:(struct CGSize { double x0; double x1; })a0 headerHeight:(double)a1 interItemSpacing:(struct CGSize { double x0; double x1; })a2;
+ (id)_defaultGridLayoutGeneratorWithReferenceSize:(struct CGSize { double x0; double x1; })a0 additionalTileCount:(unsigned long long)a1 headerHeight:(double)a2 itemSize:(struct CGSize { double x0; double x1; })a3 interItemSpacing:(struct CGSize { double x0; double x1; })a4 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a5;
+ (id)_gridLayoutGeneratorWithReferenceSize:(struct CGSize { double x0; double x1; })a0 columnCount:(unsigned long long)a1 additionalTileCount:(unsigned long long)a2 headerHeight:(double)a3 interItemSpacing:(struct CGSize { double x0; double x1; })a4;
+ (id)layoutGeneratorForLayoutType:(long long)a0 withReferenceSize:(struct CGSize { double x0; double x1; })a1 additionalTileCount:(unsigned long long)a2 headerHeight:(double)a3 itemSize:(struct CGSize { double x0; double x1; })a4 interItemSpacing:(struct CGSize { double x0; double x1; })a5 contentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a6;

@end
