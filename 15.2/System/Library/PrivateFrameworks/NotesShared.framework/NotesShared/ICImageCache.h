@class ICCache, ICLRUCache, NSObject;
@protocol OS_dispatch_source;

@interface ICImageCache : NSObject

@property (retain, nonatomic) ICCache *imageCache;
@property (retain, nonatomic) ICLRUCache *bigImageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningEventSource;

+ (double)bigImageSize;
+ (unsigned long long)maxBigImageCount;

- (void).cxx_destruct;
- (void)setImage:(id)a0 forKey:(id)a1;
- (id)init;
- (void)removeAllImages;
- (id)imageForKey:(id)a0;
- (void)removeImageForKey:(id)a0;
- (void)receivedMemoryWarning;
- (void)registerForMemoryWarnings;
- (void)unregisterForMemoryWarnings;

@end
