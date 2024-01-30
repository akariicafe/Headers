@class NTKFaceBundleLoader, NSDictionary;

@interface NTKFaceBundleManager : NSObject

@property (readonly, nonatomic) NTKFaceBundleLoader *loader;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lookupLock;
@property (readonly, nonatomic) NSDictionary *bundleIDLookup;
@property (readonly, nonatomic) NSDictionary *styleLookup;

+ (id)sharedManager;
+ (BOOL)_isRunningInSnapshotService;

- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (void)_resetCaches;
- (id)faceBundleForBundleIdentifier:(id)a0 onDevice:(id)a1;
- (id)faceBundleForFaceStyle:(long long)a0 onDevice:(id)a1;
- (void)enumerateFaceBundlesOnDevice:(id)a0 includingLegacy:(BOOL)a1 withBlock:(id /* block */)a2;
- (void)enumerateFaceBundlesOnDevice:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)loadKeyDescriptor:(id)a0;
- (void)argonUpdated:(id)a0;
- (void)_generateLookupsIfNecessary;
- (void)enumerateArgonKeyDescriptorsWithBlock:(id /* block */)a0;

@end
