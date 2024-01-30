@interface TSCHChartTypePie3D : TSCH3DChartType

- (id)init;
- (id)name;
- (struct TSCH3DChartRotationLimit { float x0; float x1; float x2; float x3; })rotation3DLimit;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;
- (id)categoryLabelPositioner;
- (id)defaultSeriesType:(unsigned long long)a0;
- (id)imageWithPreset:(id)a0 target:(int)a1 imageSize:(struct CGSize { double x0; double x1; })a2 imageScale:(double)a3 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 documentRoot:(id)a5 shouldCache:(BOOL *)a6;
- (BOOL)supportsBevels;
- (BOOL)supportsGroupedShadows;
- (id)titlePositionerWithInfo:(id)a0 scene:(id)a1;
- (id)userInterfaceName;
- (long long)userInterfaceTag;
- (id)valueLabelPositioner;

@end
