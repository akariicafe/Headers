@class NUColorSpace, NURenderContext;
@protocol NUScalePolicy;

@interface NULivePhotoRenderRequest : NURenderRequest {
    NURenderContext *_stillBufferRenderContext;
}

@property (retain) id<NUScalePolicy> scalePolicy;
@property (retain, nonatomic) NUColorSpace *colorSpace;

- (void)submit:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)livePhotoRenderResultFromPhotoResponse:(id)a0 videoResponse:(id)a1 propertiesResponse:(id)a2 error:(out id *)a3;

@end
