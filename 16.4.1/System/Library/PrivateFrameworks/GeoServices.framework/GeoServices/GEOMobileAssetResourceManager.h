@interface GEOMobileAssetResourceManager : NSObject

@property (class, readonly, nonatomic) GEOMobileAssetResourceManager *sharedManager;

- (void)notifyResourceIsCorrupt:(id)a0;
- (void)updateNow;
- (void)fetchResourceOfType:(unsigned long long)a0 extraParameters:(id)a1 options:(unsigned long long)a2 result:(id /* block */)a3;

@end
