@class BSUIMappedImageCache;

@interface HFCameraImageCache : NSObject

@property (retain, nonatomic) BSUIMappedImageCache *imageCache;

+ (id)heroFrameKeyForCameraClipIdentifierString:(id)a0;
+ (id)faceCropKeyForPersonName:(id)a0;
+ (id)posterFrameKeyForCameraClipIdentifierString:(id)a0 withOffset:(float)a1;
+ (id)personNameForFaceCropKey:(id)a0;
+ (id)keyForCameraClipIdentifierString:(id)a0 withOffset:(float)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addImage:(id)a0 forKey:(id)a1;
- (void)purgeAllImages;
- (id)imageForKey:(id)a0;
- (id)imageForCameraClipIdentifierString:(id)a0 withOffset:(float)a1;

@end
