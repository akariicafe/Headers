@interface MiroProject : Project

- (id)imageAtTime:(int)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)didInitWithContentsOfFile;
- (id)videoPreviewImageOfSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)hasMissingAssets;

@end
