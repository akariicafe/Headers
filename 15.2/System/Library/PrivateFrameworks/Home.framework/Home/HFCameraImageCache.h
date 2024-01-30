@class BSUIMappedImageCache;

@interface HFCameraImageCache : NSObject

@property (retain, nonatomic) BSUIMappedImageCache *imageCache;

+ (id)heroFrameKeyForCameraClipIdentifierString:(id)a0;
+ (id)faceCropKeyForPersonName:(id)a0;
+ (id)posterFrameKeyForCameraClipIdentifierString:(id)a0 withOffset:(float)a1;
+ (id)personNameForFaceCropKey:(id)a0;
+ (id)keyForCameraClipIdentifierString:(id)a0 withOffset:(float)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUniqueIdentifier:(id)a0;
- (id)imageForKey:(id)a0;
- (void)addImage:(id)a0 forKey:(id)a1;
- (void)purgeAllImages;
- (id)imageForCameraClipIdentifierString:(id)a0 withOffset:(float)a1;

@end
