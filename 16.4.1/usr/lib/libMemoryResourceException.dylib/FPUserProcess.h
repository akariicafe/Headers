@class FPMemoryRegion, NSMutableArray, NSMutableDictionary;

@interface FPUserProcess : FPProcess {
    unsigned long long _ledgers[3];
    NSMutableArray *_images;
    NSMutableDictionary *_ownedVmObjects;
    unsigned long long _cachedDispositionAddress;
    int _cachedDisposition;
    FPMemoryRegion *_pendingUnusedSharedRegion;
    BOOL _bailedOut;
}

@property (readonly, nonatomic) unsigned int task;
@property (nonatomic) unsigned long long phys_footprint;

- (void)gatherData;
- (id)_gatherOwnedVmObjects;
- (BOOL)_populateTask;
- (void)_gatherIdleExitStatus;
- (void)dealloc;
- (BOOL)_isAlive;
- (void).cxx_destruct;
- (id)auxData;
- (void)_addSubrangesForRegion:(id)a0 purgeState:(int)a1;
- (BOOL)_configurePageSize;
- (void)_gatherImageData;
- (void)_gatherIsTranslated;
- (void)_gatherPhysFootprint;
- (void)_gatherSharedCacheFromDyldSnapshot:(struct dyld_process_snapshot_s { } *)a0;
- (BOOL)_populateMemoryRegionWithPageQueries:(id)a0 regionInfo:(struct vm_region_submap_info_64 { int x0; int x1; unsigned int x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned char x11; unsigned char x12; int x13; int x14; unsigned int x15; unsigned short x16; unsigned int x17; unsigned long long x18; } *)a1;
- (void)_setIdleExitStatusFromDirtyFlags:(unsigned int)a0;
- (void)enumerateRegions:(id /* block */)a0;
- (id)initWithBsdInfo:(struct proc_bsdinfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[32]; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned long long x20; unsigned long long x21; } *)a0;

@end
