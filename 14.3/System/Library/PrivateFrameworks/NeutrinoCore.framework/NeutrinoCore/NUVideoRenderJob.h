@interface NUVideoRenderJob : NURenderJob

- (id)result;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (BOOL)requiresVideoComposition;
- (BOOL)wantsOutputGeometry;
- (id)scalePolicy;
- (BOOL)wantsOutputVideo;
- (id)generateVideoComposition:(out id *)a0;
- (id)videoRenderRequest;

@end
