@class NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface WKHeritageStripeImageGenerator : NSObject

@property (class, readonly, nonatomic) WKHeritageStripeImageGenerator *defaultImageGenerator;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_wallpaperRequestQueue;
@property (retain, nonatomic) NSCache *_wallpaperCache;

- (id)init;
- (void).cxx_destruct;
- (void)requestWallpaperImageWithBackgroundColor:(id)a0 completion:(id /* block */)a1;
- (id)requestWallpaperImageWithBackgroundColorSynchronous:(id)a0;
- (id)thumbnailImageWithBackgroundColor:(id)a0 appearanceAware:(BOOL)a1;

@end
