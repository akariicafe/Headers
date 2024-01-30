@interface NUSurfaceRenderJob : NUImageRenderJob

- (id)result;
- (id)imageAccumulationNodeWithImageSize:(struct { long long x0; long long x1; })a0 tileSize:(struct { long long x0; long long x1; })a1 borderSize:(struct { long long x0; long long x1; })a2 format:(id)a3 colorSpace:(id)a4;

@end
