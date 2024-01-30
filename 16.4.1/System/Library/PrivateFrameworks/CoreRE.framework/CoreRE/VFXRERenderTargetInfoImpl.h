@class NSString;

@interface VFXRERenderTargetInfoImpl : NSObject <VFXRERenderTargetInfo>

@property (nonatomic) const struct RenderTargetInfo { struct RenderPipelineDescriptorData { unsigned int x0; int x1[8]; int x2; } x0; BOOL x1; unsigned int x2; } *_renderTargetInfo;
@property (readonly, nonatomic) BOOL vrrEnabled;
@property (readonly, nonatomic) long long sampleCount;
@property (readonly, nonatomic) unsigned long long depthStencilPixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)colorPixelFormatAtIndex:(long long)a0;

@end
