@class FPDExtensionManager;

@interface FPDCacheDeleteService : NSObject

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

+ (int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)a0;

- (id)nonPurgableSpacePerProviderOnVolume:(id)a0;
- (id)volumesByProviderDomain;
- (id)purgableSpaceForAllUrgenciesOnVolume:(id)a0 activity:(id)a1;
- (void)registerActivity;
- (void)start;
- (id)evictableByProviderDomainID:(int)a0 activity:(id)a1;
- (void).cxx_destruct;
- (BOOL)shouldSearchableItem:(id)a0 beEvictedAtUrgency:(int)a1;
- (void)evictItems:(id)a0;
- (void)enumerateFPFSDomainsUsingBlock:(id /* block */)a0;
- (id)allStorageVolumes;
- (BOOL)getVolume:(int *)a0 forPath:(id)a1;
- (void)enumerateProviderDomainOnVolume:(id)a0 usingBlock:(id /* block */)a1;
- (id)queryWithAttributes:(id)a0;
- (void)enumeratePurgeableFilesOnVolume:(id)a0 forUrgency:(int)a1 sizeOnly:(BOOL)a2 activity:(id)a3 handler:(id /* block */)a4;
- (void)dumpStateTo:(id)a0;

@end
