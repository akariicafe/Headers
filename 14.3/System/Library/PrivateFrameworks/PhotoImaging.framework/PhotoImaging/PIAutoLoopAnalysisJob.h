@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob

@property (retain, nonatomic) AVAsset *videoSource;
@property (retain, nonatomic) NSDictionary *recipe;

- (id)result;
- (id)cacheKey;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (id)scalePolicy;
- (BOOL)wantsOutputVideo;
- (id)analysisRequest;

@end
