@class NSData;
@protocol MTLTexture, MTLDevice;

@interface PXGTextureDataColorLookupCube : PXGColorLookupCube {
    id<MTLDevice> _device;
    id<MTLTexture> _texture;
}

@property (readonly, nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) NSData *data;

- (BOOL)shouldCache;
- (void /* unknown type, empty encoding */)center;
- (void).cxx_destruct;
- (id)init;
- (id)textureData;
- (id)createTextureWithDevice:(id)a0;
- (id)initWithData:(id)a0 edgeSize:(long long)a1 pixelFormat:(unsigned long long)a2;

@end
