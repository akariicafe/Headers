@interface NUGeometryJob : NURenderJob

- (id)result;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (id)scalePolicy;
- (id)geometryRequest;

@end
