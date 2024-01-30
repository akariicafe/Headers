@protocol NUScalePolicy;

@interface NUSubjectDetectionRequest : NURenderRequest

@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (id)description;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (id)submitGenericSynchronous:(out id *)a0;

@end
