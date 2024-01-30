@class NSString;

@interface TRIDeferredDeleter : NSObject {
    NSString *_rootDir;
}

+ (BOOL)_createSymlinkIfNonExistentAtPath:(id)a0 withDestinationPath:(id)a1;
+ (BOOL)_removeDeferredDeletedItemWithLink:(id)a0 externalReferenceStore:(id)a1 wasDeleted:(BOOL *)a2;

- (BOOL)collectGarbageWithRootDirLockWitness:(const struct TRIFlockWitness_ { int x0; } *)a0 externalReferenceStore:(id)a1;
- (id)initForRootDir:(id)a0;
- (void).cxx_destruct;
- (BOOL)unmarkItemAtRelativePath:(id)a0;
- (id)_deferredDeletedLinksDir;
- (BOOL)markItemAtRelativePath:(id)a0;
- (id)_collectRelativeLinkPathsWithLinksDirLockWitness:(const struct TRIFlockWitness_ { int x0; } *)a0;
- (id)_linkPathForDeferredDeletedItemAtPath:(id)a0;
- (BOOL)_cleanupWithLinksDirLockWitness:(const struct TRIFlockWitness_ { int x0; } *)a0 externalReferenceStore:(id)a1;

@end
