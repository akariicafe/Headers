@interface DSNSHelperContext : NSObject {
    void *impl;
}

- (void)dealloc;
- (id)initWithOptions:(unsigned int)a0 delegate:(id)a1;
- (BOOL)ensureFreeSpace:(long long)a0 onVolume:(id)a1 error:(id *)a2;
- (void)clearCopyStateForSources:(id)a0 destination:(id)a1 targetNames:(id)a2 groupUUID:(id)a3;
- (BOOL)copyItemsAtURLs:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 conflictStrategy:(id)a3 receiveTargets:(id /* block */)a4 error:(id *)a5;
- (BOOL)copyRootMetadataAtURL:(id)a0 toDestinationURL:(id)a1 targetName:(id)a2 error:(id *)a3;
- (BOOL)createLockInDestinationURL:(id)a0 sourceURL:(id)a1 groupUUID:(id)a2 groupCount:(long long)a3 conflictStrategy:(id)a4 isDuplication:(BOOL)a5 clonedInstead:(BOOL *)a6 resultName:(id *)a7 error:(id *)a8;
- (BOOL)createLockNamed:(id)a0 destinationURL:(id)a1 sourceURL:(id)a2 groupUUID:(id)a3 isDuplication:(BOOL)a4 groupCount:(long long)a5 clonedInstead:(BOOL *)a6 error:(id *)a7;
- (BOOL)launchDesktopServicesHelper:(id *)a0;
- (BOOL)preflightAndCloneIfPossible:(id)a0 toURL:(id)a1 groupUUID:(id)a2 sourceURLsToCopy:(id *)a3 isDuplication:(BOOL)a4 targetNames:(id *)a5 maxFileSize:(unsigned long long *)a6 conflictStrategy:(id)a7 receiveTargets:(id /* block */)a8 error:(id *)a9;
- (unsigned long long)resolveConflictAtURL:(id)a0 withStrategy:(id)a1;
- (BOOL)sizeURL:(id)a0 destinationURL:(id)a1 targetName:(id)a2 coordinate:(BOOL)a3 spaceNeeds:(struct DestinationSpaceNeeds { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; char x13[1024]; char x14[1024]; long long x15; unsigned long long x16; BOOL x17; unsigned int x18; int x19; } *)a4 groupUUID:(id)a5 error:(id *)a6;
- (void)stopAccessingURLs:(id)a0;

@end
