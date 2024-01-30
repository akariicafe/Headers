@class NSArray;

@interface CKDCachePurger : NSObject

@property (nonatomic) BOOL purged;
@property (readonly, nonatomic) NSArray *oldCacheDirs;

+ (id)enumerateOldCachesForApplicationBundleID:(id)a0 sourceApplicationBundleID:(id)a1 containerPath:(id)a2 cachesPath:(id)a3;

- (void).cxx_destruct;
- (void)purgeOldCacheDirectories;
- (id)initWithApplicationBundleID:(id)a0 sourceApplicationBundleID:(id)a1 containerPath:(id)a2 cachePath:(id)a3;

@end
