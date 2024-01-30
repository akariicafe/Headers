@class TSDInfoGeometry, TSCHChartInfo;

@interface TSCHSageGeometryHelper : NSObject {
    TSCHChartInfo *_chartInfo;
    TSDInfoGeometry *_importedInfoGeometry;
}

+ (id)helperWithImportedChartInfo:(id)a0 importedInfoGeometry:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sageChartAreaBoundsForExportWithChartInfo:(id)a0 geometryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 returningContainingViewportSize:(id *)a2;

- (struct CGSize { double x0; double x1; })naturalSize;
- (void).cxx_destruct;
- (id)initWithImportedChartInfo:(id)a0 importedInfoGeometry:(id)a1;

@end
