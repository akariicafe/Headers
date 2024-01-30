@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface OFImageCache : NSObject {
    NSObject<OS_dispatch_queue> *_serialDiskSaveQueue;
    NSString *_diskCacheDirectory;
    NSMutableDictionary *_diskCacheDirectoryForURLs;
}

@property (nonatomic) BOOL useAsynchronousSerialDiskSaveQueue;
@property (nonatomic) unsigned long long imageFormat;

+ (unsigned long long)alignResolution:(unsigned long long)a0;
+ (unsigned long long)bestResolutionForSize:(struct CGSize { double x0; double x1; })a0;

- (void)invalidateMemoryCaches;
- (void)dealloc;
- (id)init;
- (void)invalidateDiskCaches;
- (void)setImage:(struct CGImage { } *)a0 withResolution:(unsigned long long)a1 forURL:(id)a2;
- (void)_didEnterBackgroundNotification;
- (void)_didReceiveMemoryWarningNotification;
- (id)_diskCacheDirectoryForURL:(id)a0;
- (id)_diskCacheFilePathForURL:(id)a0 withResolution:(unsigned long long)a1;
- (id)_diskCacheResolutionsForURL:(id)a0;
- (void)_willTerminateNotification;
- (struct CGImage { } *)bestImageDiskCacheForURL:(id)a0;
- (BOOL)hasImageForURL:(id)a0 withResolution:(unsigned long long)a1;
- (struct CGImage { } *)imageForURL:(id)a0 withResolution:(unsigned long long)a1;
- (struct CGImage { } *)imageFromBestDiskCacheForURL:(id)a0 withResolution:(unsigned long long)a1;
- (id)initWithDiskCacheDirectory:(id)a0;
- (void)invalidateDiskCacheForURL:(id)a0;
- (void)purgeDiskCache:(unsigned long long)a0 progressBlock:(id /* block */)a1;

@end
