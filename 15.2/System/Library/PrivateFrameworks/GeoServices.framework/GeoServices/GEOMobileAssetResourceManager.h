@interface GEOMobileAssetResourceManager : NSObject

@property (class, readonly, nonatomic) GEOMobileAssetResourceManager *sharedManager;

- (void)fetchResourceOfType:(unsigned long long)a0 extraParameters:(id)a1 options:(unsigned long long)a2 result:(id /* block */)a3;
- (void)updateNow;

@end
