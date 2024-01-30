@class NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface MKPictureItemViewImageProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *blurQueue;
@property (retain, nonatomic) NSCache *blurredImagesCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)blurredImage:(id)a0 displaySize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)imageWithURL:(id)a0 displaySize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;

@end
