@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SFStoreBannerTracker : NSObject {
    NSMutableDictionary *_blockedProducts;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) SFStoreBannerTracker *sharedTracker;

- (id)filePath;
- (void)load;
- (void)save;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (void)blockProductBanner:(id)a0;
- (void)isProductBannerBlocked:(id)a0 completion:(id /* block */)a1;

@end
