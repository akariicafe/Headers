@interface NUVideoRenderJob : NURenderJob

- (id)result;
- (BOOL)prepare:(out id *)a0;
- (BOOL)requiresVideoComposition;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsRenderStage;
- (id)generateVideoComposition:(out id *)a0;
- (id)videoRenderRequest;

@end
