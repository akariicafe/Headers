@protocol NUScalePolicy;

@interface NUSaliencyRequest : NURenderRequest

@property (retain, nonatomic) id<NUScalePolicy> scalePolicy;
@property (nonatomic) BOOL useLargeResolution;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (id)description;
- (id)newRenderJob;
- (long long)mediaComponentType;
- (id)submitGenericSynchronous:(out id *)a0;

@end
