@protocol TRIPaths;

@interface TRIFactorPackSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (id)_collectFactorPackSets;
- (id)pathForFactorPackSetWithId:(id)a0;
- (BOOL)saveFactorPackSet:(id)a0;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1;
- (BOOL)removeUnreferencedFactorPackSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (void)enumerateFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(BOOL)a1 withBlock:(id /* block */)a2;
- (BOOL)hasFactorPackSetWithId:(id)a0 path:(id *)a1;
- (id)initWithPaths:(id)a0;
- (id)init;
- (id)parentDirForFactorPackSets;
- (BOOL)_forceRemoveItemAtPath:(id)a0;
- (void).cxx_destruct;

@end
