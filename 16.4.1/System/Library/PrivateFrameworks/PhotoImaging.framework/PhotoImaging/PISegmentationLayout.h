@interface PISegmentationLayout : NSObject

+ (id)generateLayoutForLayoutConfiguration:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 regions:(id)a2 parallaxClassification:(unsigned long long)a3 context:(id)a4 matte:(id)a5 layoutScore:(double *)a6 cropScore:(double *)a7 clockOverlapAcceptable:(BOOL *)a8;

@end
