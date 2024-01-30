@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob

@property (retain, nonatomic) AVAsset *videoSource;
@property (retain, nonatomic) NSDictionary *recipe;

- (id)cacheKey;
- (BOOL)render:(out id *)a0;
- (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsCompleteStage;
- (id)scalePolicy;
- (BOOL)wantsOutputVideo;
- (id)analysisRequest;

@end
