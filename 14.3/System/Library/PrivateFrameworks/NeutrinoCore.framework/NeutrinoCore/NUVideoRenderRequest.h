@class NUColorSpace;
@protocol NUScalePolicy;

@interface NUVideoRenderRequest : NURenderRequest

@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (retain) id<NUScalePolicy> scalePolicy;

- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (id)newRenderJob;
- (long long)mediaComponentType;

@end
