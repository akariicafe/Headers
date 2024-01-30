@class CIImage, AVAsynchronousCIImageFilteringRequestInternal;

@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying> {
    AVAsynchronousCIImageFilteringRequestInternal *_internal;
}

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } renderSize;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } compositionTime;
@property (readonly, nonatomic) CIImage *sourceImage;

- (void)finishWithError:(id)a0;
- (void)_willDeallocOrFinalize;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)finishWithImage:(id)a0 context:(id)a1;
- (id)initUsingCompositingRequest:(id)a0 sourceFrame:(struct __CVBuffer { } *)a1 cancellationTest:(id /* block */)a2 defaultCIContextProvider:(id /* block */)a3 completionHandler:(id /* block */)a4;

@end
