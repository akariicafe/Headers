@class NSSet, TDThemeCompressionType, TDTexturePixelFormat;

@interface TDTextureRenditionSpec : TDRenditionSpec

@property (nonatomic) BOOL cubeMap;
@property (retain, nonatomic) NSSet *mipLevels;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (retain, nonatomic) TDTexturePixelFormat *pixelFormat;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (BOOL)canBePackedWithDocument:(id)a0;

@end
