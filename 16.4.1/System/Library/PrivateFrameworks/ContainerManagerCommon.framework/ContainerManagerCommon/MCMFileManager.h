@interface MCMFileManager : NSObject {
    void /* function */ *_mkstemp_dprotected_np;
}

+ (id)defaultManager;

- (id)_realPathForURL:(id)a0 allowNonExistentPathComponents:(BOOL)a1;
- (BOOL)setDataProtectionClassOfItemAtURL:(id)a0 toClass:(int)a1 ifPredicate:(id /* block */)a2 error:(id *)a3;
- (id)_realPathWhatExistsInPath:(id)a0;
- (BOOL)_enumeratePOSIX1eACLEntriesAtURL:(id)a0 error:(id *)a1 usingBlock:(id /* block */)a2;
- (id)fsNodeOfURL:(id)a0 followSymlinks:(BOOL)a1 error:(id *)a2;
- (id)targetOfSymbolicLinkAtURL:(id)a0 error:(id *)a1;
- (BOOL)stripACLFromURL:(id)a0 error:(id *)a1;
- (BOOL)itemAtURL:(id)a0 exists:(BOOL *)a1 isDirectory:(BOOL *)a2 error:(id *)a3;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 mode:(unsigned short)a2 class:(int)a3 error:(id *)a4;
- (BOOL)removeExclusionFromBackupFromURL:(id)a0 error:(id *)a1;
- (BOOL)_CreateSystemUserACEInACL:(struct _acl **)a0 withPermissions:(int)a1 andFlags:(int)a2 withError:(id *)a3;
- (id)copyDescriptionOfURL:(id)a0;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 mode:(unsigned short)a2 owner:(id)a3 class:(int)a4 fsNode:(id *)a5 error:(id *)a6;
- (BOOL)fixUserPermissionsAtURL:(id)a0 limitToTopLevelURL:(id)a1 error:(id *)a2;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 mode:(unsigned short)a2 owner:(id)a3 error:(id *)a4;
- (BOOL)itemExistsAtURL:(id)a0;
- (struct _acl { } *)_CopyTopLevelSystemContainerACLWithError:(id *)a0;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 mode:(unsigned short)a2 owner:(id)a3 class:(int)a4 error:(id *)a5;
- (BOOL)moveItemIfExistsAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)compareVolumeForURL:(id)a0 versusURL:(id)a1 isSameVolume:(BOOL *)a2 error:(id *)a3;
- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (id)realPathForURL:(id)a0 isDirectory:(BOOL)a1 error:(id *)a2;
- (id)urlsForItemsInDirectoryAtURL:(id)a0 error:(id *)a1;
- (BOOL)dataProtectionClassOfItemAtURL:(id)a0 class:(int *)a1 error:(id *)a2;
- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)symbolicallyLinkURL:(id)a0 toSymlinkTarget:(id)a1 error:(id *)a2;
- (BOOL)standardizeACLsForSystemContainerAtURL:(id)a0 error:(id *)a1;
- (BOOL)itemExistsAtURL:(id)a0 isDirectory:(BOOL *)a1;
- (BOOL)itemAtURL:(id)a0 followSymlinks:(BOOL)a1 exists:(BOOL *)a2 isDirectory:(BOOL *)a3 fsNode:(id *)a4 error:(id *)a5;
- (unsigned long long)dataWritingOptionsForFileAtURL:(id)a0;
- (struct _acl { } *)_CopySystemContainerACLWithNumACEs:(int)a0 isDir:(BOOL)a1 inheritOnly:(BOOL)a2 withError:(id *)a3;
- (struct { unsigned long long x0; unsigned long long x1; })fastDiskUsageForURL:(id)a0;
- (id)fsSanitizedStringFromString:(id)a0;
- (BOOL)standardizeACLsAtURL:(id)a0 isSystemContainer:(BOOL)a1 error:(id *)a2;
- (id)createTemporaryDirectoryInDirectoryURL:(id)a0 error:(id *)a1;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 mode:(unsigned short)a2 error:(id *)a3;
- (id)init;
- (BOOL)_validateSymlink:(id)a0 withStartingDepth:(unsigned int)a1 andEndingDepth:(unsigned int *)a2;
- (BOOL)itemAtURL:(id)a0 followSymlinks:(BOOL)a1 exists:(BOOL *)a2 isDirectory:(BOOL *)a3 error:(id *)a4;
- (BOOL)_traverseDirectory:(id)a0 error:(id *)a1 withBlock:(id /* block */)a2;
- (void)printDirectoryStructureAtURL:(id)a0;
- (BOOL)standardizeAllSystemContainerACLsAtURL:(id)a0 error:(id *)a1;
- (BOOL)checkFileSystemAtURL:(id)a0 isCaseSensitive:(BOOL *)a1 canAtomicSwap:(BOOL *)a2 error:(id *)a3;
- (id)createTemporaryDirectoryInDirectoryURL:(id)a0 withNamePrefix:(id)a1 error:(id *)a2;
- (BOOL)setTopLevelSystemContainerACLAtURL:(id)a0 error:(id *)a1;
- (BOOL)_moveItemAtURL:(id)a0 toURL:(id)a1 failIfSrcMissing:(BOOL)a2 error:(id *)a3;
- (struct { unsigned long long x0; unsigned long long x1; })diskUsageForURL:(id)a0;
- (BOOL)itemAtURL:(id)a0 exists:(BOOL *)a1 error:(id *)a2;
- (id)readDataFromURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)standardizeOwnershipAtURL:(id)a0 toPOSIXUser:(id)a1 error:(id *)a2;
- (BOOL)copyItemIfExistsAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)_copyItemAtURL:(id)a0 toURL:(id)a1 failIfSrcMissing:(BOOL)a2 error:(id *)a3;
- (BOOL)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)readDataFromURL:(id)a0 options:(unsigned long long)a1 fsNode:(id *)a2 error:(id *)a3;
- (BOOL)checkFileSystemAtURL:(id)a0 supportsPerFileKeys:(BOOL *)a1 error:(id *)a2;
- (BOOL)itemDoesNotExistAtURL:(id)a0;
- (BOOL)writeData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 mode:(unsigned short)a3 error:(id *)a4;
- (id)realPathForURL:(id)a0 ifChildOfURL:(id)a1;

@end
