@class NSString, PTRenderPipelineDescriptor;
@protocol MTLDeviceSPI;

@interface PTRenderPipeline : NSObject {
    PTRenderPipelineDescriptor *_descriptor;
    id<MTLDeviceSPI> _device;
    unsigned long long _activeVersion;
    NSString *_description;
}

@property (readonly) unsigned long long activeVersion;

+ (unsigned long long)latestVersion;
+ (BOOL)isMetalDeviceSupported:(id)a0;
+ (int)prewarmWithDescriptor:(id)a0;
+ (BOOL)isRenderVersionSupported:(unsigned long long)a0;
+ (int)prewarmForMediaserverd;

- (void)prewarm;
- (id)initWithDescriptor:(id)a0;
- (int)encodeRenderTo:(id)a0 withRenderRequest:(id)a1;
- (void)setActiveVersion:(unsigned long long)a0;
- (void)setResourceHeap:(id)a0;
- (id)createRenderStateWithQuality:(int)a0;
- (unsigned long long)minimumResourceHeapSize;
- (id)description;
- (void).cxx_destruct;

@end
