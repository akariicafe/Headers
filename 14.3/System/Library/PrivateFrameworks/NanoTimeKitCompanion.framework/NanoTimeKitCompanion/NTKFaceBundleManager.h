@class NTKFaceBundleLoader, NSDictionary;

@interface NTKFaceBundleManager : NSObject

@property (readonly, nonatomic) NTKFaceBundleLoader *loader;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } bundleLock;
@property (readonly, nonatomic) NSDictionary *bundleIDLookup;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_init;
- (id)faceBundleForBundleIdentifier:(id)a0 onDevice:(id)a1;
- (void)enumerateFaceBundlesOnDevice:(id)a0 withBlock:(id /* block */)a1;

@end
