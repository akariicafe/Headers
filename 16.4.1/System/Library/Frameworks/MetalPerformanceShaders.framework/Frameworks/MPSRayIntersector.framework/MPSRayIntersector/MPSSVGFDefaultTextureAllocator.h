@class NSString, NSMutableArray;
@protocol MTLDevice;

@interface MPSSVGFDefaultTextureAllocator : NSObject <MPSSVGFTextureAllocator> {
    NSMutableArray *_textures;
}

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long allocatedTextureCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void)dealloc;
- (void)reset;
- (void)returnTexture:(id)a0;
- (id)textureWithPixelFormat:(unsigned long long)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;

@end
