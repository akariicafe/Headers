@interface TRIReferenceManagedDir : NSObject

+ (struct { unsigned char x0; })_acquireLockOnDir:(id)a0 withLockingMode:(int)a1 andRunBlock:(id /* block */)a2;
+ (id)_collectDeadSymlinksForManagedDir:(id)a0 withLockWitness:(const struct TRIFlockWitness_ { int x0; } *)a1 liveSymlinkCount:(unsigned int *)a2;
+ (id)_containingManagedDirForPath:(id)a0 resolvedAbsPath:(id *)a1;
+ (BOOL)_deleteReferenceManagedDirectory:(id)a0 usingTempDir:(id)a1 managedDirWasDeleted:(BOOL *)a2;
+ (BOOL)_isTargetOfSymlink:(id)a0 containedInManagedDir:(id)a1;
+ (id)_metadataDirForManagedDir:(id)a0;
+ (BOOL)_removePaths:(id)a0 withLockWitness:(const struct TRIFlockWitness_ { int x0; } *)a1 numRemoved:(unsigned int *)a2;
+ (id)_reverseLinksDirForManagedDir:(id)a0;
+ (BOOL)_testDeletionEligibilityForManagedDir:(id)a0 withExternalReferenceStore:(id)a1 flockWitness:(const struct TRIFlockWitness_ { int x0; } *)a2 logPrefix:(id)a3 isEligible:(BOOL *)a4;
+ (BOOL)collectDeferredDeletionItemsWithManagedDir:(id)a0;
+ (BOOL)collectGarbageForManagedDir:(id)a0 withExternalReferenceStore:(id)a1 usingTempDir:(id)a2 managedDirWasDeleted:(BOOL *)a3;
+ (BOOL)createFromDir:(id)a0;
+ (BOOL)isPathInManagedDir:(id)a0;
+ (BOOL)removeFileInManagedDirWithPath:(id)a0 inUseDeletionBehavior:(unsigned char)a1 wasDeleted:(BOOL *)a2;
+ (BOOL)saveFromGarbageCollectionItemWithPath:(id)a0;
+ (BOOL)symlinkFromCurrentPath:(id)a0 withFuturePath:(id)a1 toManagedPath:(id)a2;
+ (BOOL)symlinkFromPath:(id)a0 toManagedPath:(id)a1;

- (id)init;

@end
