@interface PIVideoStabilizeRequest : NURenderRequest

@property (nonatomic) double allowedCropFraction;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) unsigned long long allowedAnalysisTypes;

+ (BOOL)canPerformGyroBasedStabilizationForAsset:(id)a0;

- (void)submit:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
