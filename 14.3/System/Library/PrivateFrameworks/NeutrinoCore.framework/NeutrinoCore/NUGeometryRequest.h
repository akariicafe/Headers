@protocol NUScalePolicy;

@interface NUGeometryRequest : NURenderRequest

@property (retain) id<NUScalePolicy> scalePolicy;

- (id)submitSynchronous:(out id *)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
