@class NSString;
@protocol MTLDevice;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder>

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (BOOL)isMemorylessRender;
- (void)endEncoding;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (id)renderCommandEncoder;

@end
