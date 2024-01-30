@interface VUIPlistMediaEntityImageLoadOperation : VUIImageLoadParamsOperation

- (id)initWithParams:(id)a0;
- (void)executionDidBegin;
- (id)initWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (id)_plistMediaEntityImageLoadParams;

@end
