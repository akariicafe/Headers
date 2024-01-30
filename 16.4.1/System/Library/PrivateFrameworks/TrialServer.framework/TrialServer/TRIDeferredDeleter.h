@class NSString;

@interface TRIDeferredDeleter : NSObject {
    NSString *_rootDir;
}

+ (BOOL)_createSymlinkIfNonExistentAtPath:(id)a0 withDestinationPath:(id)a1;
+ (BOOL)_removeDeferredDeletedItemWithLink:(id)a0 externalReferenceStore:(id)a1 wasDeleted:(BOOL *)a2;

- (void).cxx_destruct;
- (id)initForRootDir:(id)a0;
- (BOOL)_cleanupWithLinksDirLockWitness:(const struct TRIFlockWitness_ { int x0; } *)a0 externalReferenceStore:(id)a1;
- (id)_collectRelativeLinkPathsWithLinksDirLockWitness:(const struct TRIFlockWitness_ { int x0; } *)a0;
- (id)_deferredDeletedLinksDir;
- (id)_linkPathForDeferredDeletedItemAtPath:(id)a0;
- (BOOL)collectGarbageWithRootDirLockWitness:(const struct TRIFlockWitness_ { int x0; } *)a0 externalReferenceStore:(id)a1;
- (BOOL)markItemAtRelativePath:(id)a0;
- (BOOL)unmarkItemAtRelativePath:(id)a0;

@end
