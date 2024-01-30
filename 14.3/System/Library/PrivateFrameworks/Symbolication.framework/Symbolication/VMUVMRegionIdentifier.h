@class VMUTaskThreadStates, NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {
    unsigned int _task;
    int _pid;
    VMUTaskThreadStates *_threadStates;
    NSMutableArray *_regions;
    NSMapTable *_mallocZoneStatisticsMap;
    BOOL _hasFractionalPageSizes;
}

+ (id)descriptionForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 inSortedRegions:(id)a1 options:(unsigned long long)a2;

- (id)initWithTask:(unsigned int)a0;
- (id)regions;
- (id)init;
- (void).cxx_destruct;
- (id)taskThreadStates;
- (id)initWithTask:(unsigned int)a0 options:(unsigned long long)a1;
- (int)_recordRegionsAroundAddress:(unsigned long long)a0 regionDescriptionOptions:(unsigned long long)a1;
- (id)initWithTask:(unsigned int)a0 pid:(int)a1 options:(unsigned long long)a2;
- (id)initWithGraph:(id)a0 options:(unsigned long long)a1;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)a0 options:(unsigned long long)a1 maximumLength:(unsigned long long)a2 memorySizeDivisor:(unsigned int)a3;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)a0 memorySizeDivisor:(unsigned int)a1;
- (id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)a0 memorySizeDivisor:(unsigned int)a1;
- (id)nonSubmapRegionContainingAddress:(unsigned long long)a0;
- (BOOL)hasFractionalPageSizes;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (id)descriptionForRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 options:(unsigned long long)a1;
- (id)descriptionOfRegionsAroundAddress:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)descriptionForRegionTotalsWithOptions:(unsigned long long)a0;

@end
