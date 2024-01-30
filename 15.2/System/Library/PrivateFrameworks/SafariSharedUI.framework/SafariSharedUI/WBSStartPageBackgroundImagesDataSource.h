@class NSArray, NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundImagesDataSource : NSObject {
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    NSObject<OS_dispatch_queue> *_imageSavingQueue;
    NSArray *_defaultImageURLs;
    NSArray *_imageURLsWithLuminance;
    NSMutableDictionary *_pendingImageThumbnailRequests;
    struct Vector<WTF::RetainPtr<CGImage *>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } _imageCache;
    NSURL *_thumbnailsPath;
}

@property (readonly, nonatomic) long long itemCount;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)imageThumbnailWithItemIndex:(long long)a0 completion:(id /* block */)a1;
- (id)initWithBuiltInImageURLs:(id)a0 localCachesDirectory:(id)a1;
- (id)_thumbnailURLWithItemIndex:(long long)a0;
- (id)imageURLAndLuminanceWithItemIndex:(long long)a0;
- (struct RetainPtr<CGImage *> { void *x0; })_createThumbnail:(id)a0 imageSource:(struct RetainPtr<CGImageSource *> { void *x0; })a1;
- (id)initWithBundle:(id)a0 localCachesDirectory:(id)a1;
- (long long)indexOfBackgroundImageWithName:(id)a0;

@end
