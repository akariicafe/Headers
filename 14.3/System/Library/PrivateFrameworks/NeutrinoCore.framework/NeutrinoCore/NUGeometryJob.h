@interface NUGeometryJob : NURenderJob

- (id)result;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (id)scalePolicy;
- (id)geometryRequest;

@end
