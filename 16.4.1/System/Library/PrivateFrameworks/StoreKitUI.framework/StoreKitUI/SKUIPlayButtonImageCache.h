@class UIImage, NSBundle, NSString;

@interface SKUIPlayButtonImageCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _imageLock;
    NSBundle *_bundle;
    NSString *_playImageName;
    UIImage *_playImage;
    NSString *_pauseImageName;
    UIImage *_pauseImage;
    NSString *_stopImageName;
    UIImage *_stopImage;
}

@property (readonly) UIImage *playImage;
@property (readonly) UIImage *pauseImage;
@property (readonly) UIImage *stopImage;

+ (id)imageCacheForStyle:(long long)a0;

- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (void)preloadImages;

@end
