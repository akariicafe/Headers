@class NSString, NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface CPBitmapStore : NSObject {
    NSString *_path;
    NSString *_imagePath;
    NSCache *_cache;
    int _version;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
}

@property (readonly, nonatomic) int version;
@property (nonatomic) BOOL lockOnRead;
@property (nonatomic) unsigned long long cacheItemLimit;

- (void)purge;
- (void)commitTxn;
- (void *)openAndMmap:(id)a0 withInfo:(struct _img { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; } *)a1;
- (id)imageNameForKey:(id)a0 inGroup:(id)a1;
- (id)cacheNumberForKey:(id)a0;
- (BOOL)findImageWithKey:(id)a0 inGroup:(id)a1 andInfo:(struct _img { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; } *)a2;
- (unsigned int)memContentOffset;
- (BOOL)saveImageWithKey:(id)a0 inGroup:(id)a1 andInfo:(struct _img { id x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned char x6[4]; } *)a2;
- (struct CGImage { } *)_copyAndStoreImageForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 format:(unsigned char)a3 scale:(double)a4 fillMem:(id /* block */)a5 alternateCompletion:(id /* block */)a6;
- (void)storeImageDataForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 format:(unsigned char)a3 formatColor:(struct CGColor { } *)a4 scale:(double)a5 data:(id)a6;
- (struct CGImage { } *)copyImageForKey:(id)a0;
- (struct CGImage { } *)copyAndStoreImageForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 opaque:(BOOL)a3 scale:(double)a4 draw:(id /* block */)a5;
- (void)storeImageDataForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 opaque:(BOOL)a3 scale:(double)a4 data:(id)a5;
- (void)storeGrayscaleImageDataForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 opaque:(BOOL)a3 scale:(double)a4 data:(id)a5;
- (void)removeImagesInGroups:(id)a0;
- (void)storeImageDataForKey:(id)a0 inGroup:(id)a1 withSize:(struct CGSize { double x0; double x1; })a2 format:(unsigned char)a3 scale:(double)a4 data:(id)a5;
- (id)imagePath;
- (void)dealloc;
- (void)removeImagesInGroups:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)imageCount;
- (id)allGroups;
- (id)_versionPath;
- (id)initWithPath:(id)a0 version:(int)a1;
- (void)storeImageForKey:(id)a0 inGroup:(id)a1 opaque:(BOOL)a2 image:(struct CGImage { } *)a3;
- (struct CGImage { } *)copyImageForKey:(id)a0 inGroup:(id)a1;
- (int)setVersion:(int)a0;
- (void)commitTransaction;

@end
