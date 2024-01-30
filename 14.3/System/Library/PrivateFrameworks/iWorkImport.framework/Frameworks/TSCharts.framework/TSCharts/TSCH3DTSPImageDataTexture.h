@class TSDColorFill, TSCH3DTSPImageData, TSCH3DTSPMipmapData, NSString, TSPData, NSNumber, TSUOnce;

@interface TSCH3DTSPImageDataTexture : TSCH3DTexture {
    TSCH3DTSPMipmapData *mOptimizedMipmapData;
    NSNumber *mCachedHash;
    TSDColorFill *mColorFill;
    NSString *mTextureSetId;
    NSString *mImageName;
    TSUOnce *mCachedHashOnce;
}

@property (readonly, nonatomic) TSCH3DTSPImageData *data;
@property (readonly, nonatomic) TSPData *imageData;

+ (id)instanceWithArchive:(const struct Chart3DTSPImageDataTextureArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; struct DataReference *x6; struct DataReference *x7; } *)a0 unarchiver:(id)a1;
+ (id)textureWithImageData:(id)a0 colorFill:(id)a1 optimizedMipmapData:(id)a2 textureSetId:(id)a3 imageName:(id)a4;
+ (id)textureWithImageData:(id)a0 colorFill:(id)a1 textureSetId:(id)a2 imageName:(id)a3;
+ (id)textureWithImageData:(id)a0 optimizedMipmapData:(id)a1 textureSetId:(id)a2 imageName:(id)a3;

- (void)setChanged:(BOOL)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const struct Chart3DTSPImageDataTextureArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; struct DataReference *x6; struct DataReference *x7; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct Chart3DTSPImageDataTextureArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct Reference *x4; struct Reference *x5; struct DataReference *x6; struct DataReference *x7; } *)a0 archiver:(id)a1;
- (id)databufferForDataCache:(id)a0;
- (BOOL)canLoadCachedFullMipmapBufferForDataCache:(id)a0;
- (id)representativeColorBuffer;
- (id)optimizedMipmapBuffer;
- (id)initWithImageData:(id)a0 colorFill:(id)a1 optimizedMipmapData:(id)a2 textureSetId:(id)a3 imageName:(id)a4;
- (void)p_setOptimizedMipMapData:(id)a0;

@end
