@class NSString, CIImage, NSArray;

@interface SCNRenderTarget : NSObject {
    struct { unsigned char format; unsigned char sampleCount; unsigned char textureUsage; unsigned char renderToTexture : 1; unsigned char forceTextureRect : 1; unsigned char viewportDependant : 1; unsigned char renderToIOSurface : 1; unsigned char mipmapped : 1; unsigned char textureCube : 1; unsigned char padding[4]; } _description;
    void /* unknown type, empty encoding */ _size;
    unsigned long long _arrayLength;
    CIImage *_ciImage;
    NSArray *_sliceTextures;
}

@property (retain, nonatomic) id texture;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long referenceCount;
@property (nonatomic) long long timeStamp;
@property (readonly, nonatomic) BOOL viewportDependant;
@property (readonly, nonatomic) unsigned char renderBufferFormat;

- (void)dealloc;
- (id)description;
- (id)ciImage;
- (id)initWithDescription:(SEL)a0 size:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9[4]; } *)a1 arrayLength:(unsigned long long)a2;
- (BOOL)matchesDescription:(SEL)a0 size:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9[4]; } *)a1 arrayLength:(unsigned long long)a2;
- (id)textureForSliceIndex:(unsigned long long)a0;

@end
