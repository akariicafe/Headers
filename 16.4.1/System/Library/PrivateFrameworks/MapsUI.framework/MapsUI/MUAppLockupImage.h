@class UIImage, NSURL, NSObject, MUAppLockupImageMetrics;
@protocol OS_dispatch_queue;

@interface MUAppLockupImage : NSObject {
    NSObject<OS_dispatch_queue> *_imageProcessingQueue;
}

@property (readonly, nonatomic) UIImage *cachedImage;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) MUAppLockupImageMetrics *metrics;

- (void).cxx_destruct;
- (id)initWithRemoteURL:(id)a0 metrics:(id)a1;
- (void)loadImageWithCompletion:(id /* block */)a0;

@end
