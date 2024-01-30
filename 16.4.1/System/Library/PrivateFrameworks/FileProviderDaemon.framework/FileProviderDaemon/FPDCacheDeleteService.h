@class FPDExtensionManager;

@interface FPDCacheDeleteService : NSObject

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

- (void)enumerateProviderDomainOnVolume:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)getVolume:(int *)a0 forPath:(id)a1;
- (void)enumerateFPFSDomainsUsingBlock:(id /* block */)a0;
- (id)allStorageVolumes;
- (void)registerActivity;
- (id)nonPurgableSpacePerProviderOnVolume:(id)a0;
- (void)start;
- (void).cxx_destruct;

@end
