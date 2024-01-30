@class NSString, NSData;

@interface MDLTexture : NSObject <MDLNamed> {
    struct MDLTextureData { char *topLeftBytesForMip[16]; char *bottomLeftBytesForMip[16]; int channelCount; void /* unknown type, empty encoding */ dimensions; unsigned long long rowStride; BOOL isCube; } _textureData;
    NSData *_topLeftOriginData[14];
    NSData *_bottomLeftOriginData[14];
    BOOL _selfCreating;
    BOOL _alphaValuesSet;
    BOOL _hasAlphaValues;
}

@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly, nonatomic) long long rowStride;
@property (readonly, nonatomic) unsigned long long channelCount;
@property (readonly, nonatomic) unsigned long long mipLevelCount;
@property (readonly, nonatomic) long long channelEncoding;
@property (nonatomic) BOOL isCube;
@property (nonatomic) BOOL hasAlphaValues;
@property (copy, nonatomic) NSString *name;

+ (id)textureNamed:(id)a0;
+ (id)textureNamed:(id)a0 assetResolver:(id)a1;
+ (id)textureWithURL:(id)a0;
+ (id)irradianceTextureCubeWithTexture:(SEL)a0 name:(id)a1 dimensions:(id)a2 roughness:(float)a3;
+ (id)textureWithURL:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2;
+ (id)textureWithData:(id)a0 offset:(unsigned long long)a1 size:(unsigned long long)a2;
+ (id)textureNamed:(id)a0 bundle:(id)a1;
+ (id)_textureCubeWithSingleImageNamed:(id)a0 bundle:(id)a1;
+ (id)textureCubeWithImagesNamed:(id)a0 bundle:(id)a1;
+ (id)textureResourceNamed:(id)a0 assetResolver:(id)a1;
+ (id)textureFromResource:(id)a0;
+ (id)textureCubeWithImagesNamed:(id)a0;
+ (id)irradianceTextureCubeWithTexture:(SEL)a0 name:(id)a1 dimensions:(id)a2;

- (BOOL)writeToURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (struct MDLTextureData { char *x0[16]; char *x1[16]; int x2; unsigned long long x3; BOOL x4; } *)textureData;
- (id)texelDataWithTopLeftOriginAtMipLevel:(long long)a0 create:(BOOL)a1;
- (id)initWithData:(SEL)a0 topLeftOrigin:(id)a1 name:(BOOL)a2 dimensions:(id)a3 rowStride:(long long)a4 channelCount:(unsigned long long)a5 channelEncoding:(long long)a6 isCube:(BOOL)a7;
- (id)texelDataWithBottomLeftOrigin;
- (id)allocateDataAtLevel:(long long)a0;
- (void)clearTexelData;
- (id)generateDataAtLevel:(long long)a0 selector:(SEL)a1;
- (id)texelDataWithBottomLeftOriginAtMipLevel:(long long)a0 create:(BOOL)a1;
- (void)loadDataWithTopLeftOriginAtMipLevel:(long long)a0 create:(BOOL)a1 selector:(SEL)a2;
- (void)loadDataWithBottomLeftOriginAtMipLevel:(long long)a0 create:(BOOL)a1 selector:(SEL)a2;
- (BOOL)writeToURL:(id)a0 level:(unsigned long long)a1;
- (BOOL)writeToURL:(id)a0 type:(struct __CFString { } *)a1;
- (BOOL)writeToURL:(id)a0 type:(struct __CFString { } *)a1 level:(unsigned long long)a2;
- (struct CGImage { } *)imageFromTextureAtLevel:(unsigned long long)a0;
- (id)texelDataWithTopLeftOrigin:(unsigned long long)a0;
- (id)texelDataWithTopLeftOrigin;
- (void)setTexelDataWithTopLeftOrigin:(id)a0 atMipLevel:(long long)a1;
- (void)setTexelDataWithBottomLeftOrigin:(id)a0 atMipLevel:(long long)a1;
- (struct CGImage { } *)imageFromTexture;

@end
