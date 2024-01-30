@interface TSCHChartTypeStackedArea3D : TSCH3DChartType

- (id)init;
- (id)name;
- (struct TSCH3DChartRotationLimit { float x0; float x1; float x2; float x3; })rotation3DLimit;
- (id)defaultSeriesType:(unsigned long long)a0;
- (id)imageWithPreset:(id)a0 target:(int)a1 imageSize:(struct CGSize { double x0; double x1; })a2 imageScale:(double)a3 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 documentRoot:(id)a5 shouldCache:(BOOL *)a6;
- (id)userInterfaceName;
- (long long)userInterfaceTag;

@end
