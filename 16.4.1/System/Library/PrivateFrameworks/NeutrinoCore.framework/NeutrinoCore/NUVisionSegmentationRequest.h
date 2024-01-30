@protocol NUScalePolicy;

@interface NUVisionSegmentationRequest : NURenderRequest

@property (nonatomic) long long segmentationType;
@property (nonatomic) BOOL produceConfidenceMap;
@property (nonatomic) long long visionSegmentationPolicy;
@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;

+ (void)warmUp;

- (void)submit:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
