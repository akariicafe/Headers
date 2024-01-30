@interface VUIPlistMediaEntityImageLoadOperation : VUIImageLoadParamsOperation

- (void)executionDidBegin;
- (id)initWithParams:(id)a0;
- (id)_plistMediaEntityImageLoadParams;
- (id)initWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;

@end
