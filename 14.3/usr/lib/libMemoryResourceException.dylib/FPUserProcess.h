@class FPMemoryRegion, NSMutableArray, NSMutableDictionary;

@interface FPUserProcess : FPProcess {
    unsigned int _task;
    unsigned long long _sharedRegionBase;
    unsigned long long _sharedRegionSize;
    unsigned int _sharedRegionAlignmentSize;
    unsigned long long _phys_footprint_peak;
    unsigned long long _ledgers[1];
    NSMutableArray *_images;
    NSMutableDictionary *_ownedVmObjects;
    unsigned long long _cachedDispositionAddress;
    int _cachedDisposition;
    FPMemoryRegion *_pendingUnusedSharedRegion;
}

@property (nonatomic) unsigned long long phys_footprint;

- (void).cxx_destruct;
- (BOOL)_configurePageSize;
- (BOOL)_isAlive;
- (void)gatherData;
- (id)initWithBsdInfo:(struct proc_bsdinfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[32]; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned long long x20; unsigned long long x21; } *)a0;
- (void)_setIdleExitStatusFromDirtyFlags:(unsigned int)a0;
- (BOOL)_populateTask;
- (void)_gatherIdleExitStatus;
- (id)_gatherOwnedVmObjects;
- (id)auxData;
- (void)_gatherIsTranslated;
- (BOOL)_setSharedRegionFromPlatform:(long long)a0;
- (void)_gatherPhysFootprint;
- (void)_gatherLedgers;
- (void)_gatherImageData;
- (void)_gatherMemoryData;
- (void)_addErrnoWarningWithDescription:(id)a0;
- (BOOL)_enumerateDispositionChunksWithStartAddr:(unsigned long long)a0 pagesToQuery:(unsigned long long)a1 block:(id /* block */)a2;
- (BOOL)_populateMemoryRegionWithPageQueries:(id)a0 regionInfo:(struct vm_region_submap_info_64 { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned char x11; unsigned char x12; int x13; int x14; unsigned int x15; unsigned short x16; unsigned int x17; unsigned long long x18; } *)a1;
- (unsigned long long)_lastNonSharedCacheRegion;
- (void)_processMachVMError:(int)a0 expectingErrorOnExit:(int)a1;
- (BOOL)_addRegionsToArray:(id)a0 forRegionInSharedRegionStartingAt:(unsigned long long)a1 withSize:(unsigned long long)a2 withRegionInfo:(struct vm_region_submap_info_64 { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned char x11; unsigned char x12; int x13; int x14; unsigned int x15; unsigned short x16; unsigned int x17; unsigned long long x18; } *)a3 imageEnumerator:(id)a4;
- (void)_addSubrangesForRegion:(id)a0 purgeState:(int)a1;
- (void)enumerateRegions:(id /* block */)a0;

@end
