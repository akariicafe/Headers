@interface SXStripGalleryComponentSizer : SXComponentSizer

- (id)imageResources;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })overrideColumnLayoutForColumnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inColumnLayout:(id)a1;
- (unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)a0;
- (unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)a0;
- (double)contentWidthForColumnLayout:(id)a0;
- (double)rightContentInsetForColumnLayout:(id)a0;
- (double)xOffsetForColumnLayout:(id)a0;

@end
