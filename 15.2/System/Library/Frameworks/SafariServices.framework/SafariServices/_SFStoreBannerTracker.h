@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface _SFStoreBannerTracker : NSObject {
    NSMutableDictionary *_blockedProducts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedTracker;

- (id)filePath;
- (void)save;
- (void)clear;
- (void)isProductBannerBlocked:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)load;
- (void)blockProductBanner:(id)a0;

@end
