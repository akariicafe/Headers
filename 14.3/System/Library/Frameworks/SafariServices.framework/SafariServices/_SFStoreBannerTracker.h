@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _SFStoreBannerTracker : NSObject {
    NSMutableDictionary *_blockedProducts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedTracker;

- (id)filePath;
- (void)clear;
- (void)load;
- (id)init;
- (void).cxx_destruct;
- (void)save;
- (void)blockProductBanner:(id)a0;
- (void)isProductBannerBlocked:(id)a0 completion:(id /* block */)a1;

@end
