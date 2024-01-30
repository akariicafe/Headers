@protocol TRIPaths;

@interface TRIFactorPackSetStorage : NSObject {
    id<TRIPaths> _paths;
}

- (id)pathForFactorPackSetWithId:(id)a0;
- (BOOL)saveFactorPackSet:(id)a0;
- (id)_collectFactorPackSets;
- (void)enumerateFactorPacksForFactorPackSet:(id)a0 usingLegacyPaths:(BOOL)a1 withBlock:(id /* block */)a2;
- (BOOL)_nonAtomicOverwriteWithSrc:(id)a0 dest:(id)a1;
- (BOOL)_forceRemoveItemAtPath:(id)a0;
- (BOOL)removeUnreferencedFactorPackSetsWithServerContext:(id)a0 removedCount:(unsigned int *)a1;
- (void).cxx_destruct;
- (id)parentDirForFactorPackSets;
- (id)init;
- (BOOL)hasFactorPackSetWithId:(id)a0 path:(id *)a1;
- (id)initWithPaths:(id)a0;

@end
