@class PIReframeResult, PIStillReframeRequest;

@interface PIStillReframeJob : NURenderJob

@property (readonly, nonatomic) PIStillReframeRequest *stillReframeRequest;
@property (retain, nonatomic) PIReframeResult *reframeResult;

- (id)initWithRequest:(id)a0;
- (id)result;
- (id)cacheKey;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithStillReframeRequest:(id)a0;

@end
