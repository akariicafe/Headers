@class NSString, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_imageSavingQueue;
    struct RetainPtr<CGImage *> { void *m_ptr; } _prefetchedImage;
    struct RetainPtr<CGImage *> { void *m_ptr; } _prefetchedImageThumbnail;
    NSURL *_prefetchedImageURL;
    NSString *_lastPrefetchedFilePath;
    _Atomic long long _prefetchingCoalescingDelay;
    double _prefetchedImageLuminance;
    long long _appearance;
}

@property (class, readonly, nonatomic) WBSStartPageBackgroundManager *defaultManager;

@property (readonly, nonatomic) struct RetainPtr<CGImage *> { void *m_ptr; } image;
@property (readonly, nonatomic) struct RetainPtr<CGImage *> { void *x0; } prefetchedImageThumbnail;
@property (readonly, copy, nonatomic) NSString *prefetchedImageName;

+ (void)warmUp;

- (void)clearImage;
- (void)prefetchImage:(id)a0 completion:(id /* block */)a1;
- (void)_setImage:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(long long)a1;
- (void)_clearPrefetchedImage;
- (void)_saveImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearance:(long long)a1 completion:(id /* block */)a2;
- (void)clearPrefetchedImage;
- (void)cacheImageFromURL:(id)a0 completion:(id /* block */)a1;
- (void)_commitImage:(struct RetainPtr<CGImage *> { void *x0; })a0 appearanceName:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_processImage;
- (void)processImage;
- (long long)appearanceForLuminance:(double)a0;
- (void)commitPrefetchedImageWithLuminance:(double)a0;
- (void)_updateThumbnailIfNeeded;
- (void)_loadImageFromDisk;
- (void)prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2;
- (long long)appearanceIfImageExists:(BOOL)a0;
- (long long)appearanceForImage:(struct RetainPtr<CGImage *> { void *x0; })a0;
- (void)_setImageOnAnyQueue:(struct RetainPtr<CGImage *> { void *x0; })a0 withAppearance:(long long)a1;
- (void)_setExtendedAttributesOnBackgroundImage;
- (id).cxx_construct;
- (void)_prefetchImage:(id)a0 luminance:(double)a1 completion:(id /* block */)a2 withNanoSecondDelay:(long long)a3;
- (void)loadImageFromDisk;

@end
