@interface TSCHChartTypeDonut3D : TSCH3DChartType

- (id)init;
- (id)valueLabelPositioner;
- (id)categoryLabelPositioner;
- (id)defaultSeriesType:(unsigned long long)a0;
- (id)userInterfaceName;
- (id)imageWithPreset:(id)a0 target:(int)a1 imageSize:(struct CGSize { double x0; double x1; })a2 imageScale:(double)a3 swatchFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 documentRoot:(id)a5 shouldCache:(BOOL *)a6;
- (BOOL)supportsGroupedShadows;
- (BOOL)supportsBevels;
- (long long)userInterfaceTag;
- (BOOL)approximatesTitleAccommodationUsingLegendSize;

@end
