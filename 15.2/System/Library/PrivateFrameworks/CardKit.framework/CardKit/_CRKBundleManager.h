@class NSSet, NSMutableSet;

@interface _CRKBundleManager : NSObject {
    NSMutableSet *_bundles;
}

@property (readonly, nonatomic) NSSet *bundles;

+ (id)sharedInstance;
+ (Class)bundleClass;
+ (id)bundleDirectoryPath;

- (void).cxx_destruct;
- (id)init;
- (void)loadBundles;
- (void)registerBundle:(id)a0;

@end
