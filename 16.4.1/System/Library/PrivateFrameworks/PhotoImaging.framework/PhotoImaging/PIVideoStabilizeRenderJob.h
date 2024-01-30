@class NSArray, NSDictionary;

@interface PIVideoStabilizeRenderJob : NURenderJob

@property (readonly, copy, nonatomic) NSArray *keyframes;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } stabCropRect;
@property (nonatomic) unsigned long long allowedAnalysisTypes;
@property (readonly, nonatomic) unsigned long long analysisType;
@property (nonatomic) double allowedCropFraction;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) NSDictionary *rawHomographies;

- (id)result;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsRenderStage;

@end
