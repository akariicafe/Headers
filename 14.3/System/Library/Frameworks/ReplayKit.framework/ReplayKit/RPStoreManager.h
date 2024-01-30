@interface RPStoreManager : NSObject

+ (id)sharedManager;

- (void)loadItemDetailsForBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
