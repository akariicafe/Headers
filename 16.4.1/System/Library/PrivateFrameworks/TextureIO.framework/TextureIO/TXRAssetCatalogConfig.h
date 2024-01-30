@class TXRTexture, NSMutableSet, TXRAssetCatalogFileAttributes;

@interface TXRAssetCatalogConfig : NSObject

@property (retain, nonatomic) TXRAssetCatalogFileAttributes *baseFileAttributes;
@property (readonly, nonatomic) NSMutableSet *fileAttributesList;
@property (readonly, nonatomic) TXRTexture *texture;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) unsigned long long mipmapOption;
@property (nonatomic) unsigned long long memory;
@property (nonatomic) unsigned long long graphicsFeatureSet;
@property (nonatomic) unsigned long long idiom;
@property (nonatomic) unsigned long long displayColorSpace;
@property (nonatomic) unsigned long long scaleFactor;

- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;
- (void)addFileAttributesForLevel:(unsigned long long)a0 face:(unsigned long long)a1;
- (void)addFileAttributesForLevel:(unsigned long long)a0;
- (void)addFileAttributesForLevel:(unsigned long long)a0 face:(unsigned long long)a1 fileFormat:(unsigned long long)a2 colorSpace:(struct CGColorSpace { } *)a3 exifOrientation:(unsigned char)a4;
- (void)addFileAttributesForLevel:(unsigned long long)a0 fileFormat:(unsigned long long)a1 colorSpace:(struct CGColorSpace { } *)a2 exifOrientation:(unsigned char)a3;

@end
