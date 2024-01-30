@interface CAMPanoramaUtilities : NSObject

+ (struct CGSize { double x0; double x1; })defaultPreviewSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })panoramaViewLayoutInsetsForLayoutStyle:(long long)a0 referenceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (double)singlePreviewFrameWidthForPreviewHeight:(double)a0;
+ (struct CGSize { double x0; double x1; })panoramaViewSizeForCaptureSize:(struct CGSize { double x0; double x1; })a0 referenceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 layoutStyle:(long long)a2;
+ (struct CGSize { double x0; double x1; })previewStripSizeForCaptureSize:(struct CGSize { double x0; double x1; })a0 referenceBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 layoutStyle:(long long)a2;
+ (struct CGSize { double x0; double x1; })bufferSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })panoramaViewPreviewStripInsetsForLayoutStyle:(long long)a0;

@end
