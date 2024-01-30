@class PXGStringTextureProvider, PXGPPTStringsLayout;

@interface PXGPPTTextRenderingTester : NSObject <PXGTextureProviderDelegate>

@property (retain, nonatomic) PXGStringTextureProvider *stringTextureProvider;
@property (retain, nonatomic) PXGPPTStringsLayout *stringsLayout;
@property (copy, nonatomic) id /* block */ textureProviderDidProvideCGImageHandler;

- (void)runRenderTextTestWithOptions:(id)a0 latencyMeter:(id)a1 completionHandler:(id /* block */)a2 failureHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)textureProvider:(id)a0 didProvideCGImage:(struct CGImage { } *)a1 orientation:(unsigned int)a2 forRequestID:(int)a3;
- (void)textureProvider:(id)a0 didProvidePayload:(id)a1 forRequestID:(int)a2;
- (void)textureProviderNeedsToUnregisterFromDisplayLinkUpdates:(id)a0;
- (void)textureProviderNeedsToRegisterToDisplayLinkUpdates:(id)a0;
- (void)textureProvider:(id)a0 didProvideImageData:(id)a1 withSpecAtIndex:(long long)a2 bytesPerRow:(unsigned long long)a3 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 forRequestID:(int)a5;
- (void)textureProvider:(id)a0 didProvideNothingForRequestID:(int)a1;
- (void)textureProvider:(id)a0 didProvidePixelBuffer:(struct __CVBuffer { } *)a1 orientationTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 forRequestID:(int)a3;

@end
