@interface VUIMPMediaEntityImageLoadOperation : VUIImageLoadParamsOperation

- (void)executionDidBegin;
- (id)initWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;
- (id)_MPMediaEntityImageLoadParams;
- (void)_finishWithImage:(id)a0;
- (id)initWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1;

@end
