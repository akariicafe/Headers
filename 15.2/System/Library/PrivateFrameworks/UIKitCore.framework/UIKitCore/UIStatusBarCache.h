@class CPBitmapStore;

@interface UIStatusBarCache : NSObject {
    CPBitmapStore *_store;
}

@property (readonly, nonatomic, getter=isWriteable) BOOL writeable;

+ (id)sharedInstance;

- (id)imageNamed:(id)a0 forGroup:(id)a1 withScale:(double)a2;
- (void)removeImagesInGroup:(id)a0;
- (void)cacheImage:(id)a0 named:(id)a1 forGroup:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
