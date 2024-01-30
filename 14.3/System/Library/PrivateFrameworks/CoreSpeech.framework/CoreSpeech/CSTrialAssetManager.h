@interface CSTrialAssetManager : NSObject

+ (id)sharedInstance;

- (void)getInstalledAssetofType:(unsigned long long)a0 completion:(id /* block */)a1;

@end
