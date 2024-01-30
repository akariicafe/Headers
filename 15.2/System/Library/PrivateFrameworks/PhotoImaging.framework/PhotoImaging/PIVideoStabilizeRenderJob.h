@class NSArray, NSDictionary;

@interface PIVideoStabilizeRenderJob : NURenderJob

@property (readonly, copy, nonatomic) NSArray *keyframes;
@property (readonly, nonatomic) struct { struct { long long x; long long y; } origin; struct { long long width; long long height; } size; } stabCropRect;
@property (nonatomic) unsigned long long allowedAnalysisTypes;
@property (readonly, nonatomic) unsigned long long analysisType;
@property (nonatomic) double allowedCropFraction;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) NSDictionary *rawHomographies;

- (void).cxx_destruct;
- (id)result;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsRenderStage;
- (BOOL)wantsCompleteStage;
- (id)scalePolicy;
- (BOOL)wantsOutputVideo;

@end
