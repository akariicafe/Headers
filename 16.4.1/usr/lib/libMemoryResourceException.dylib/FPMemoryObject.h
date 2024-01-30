@class FPRangeList, NSMutableArray, NSMutableDictionary;

@interface FPMemoryObject : NSObject <NSCopying> {
    unsigned long long _totalDirtySize;
    unsigned long long _totalCleanSize;
    unsigned long long _totalSwappedSize;
    unsigned long long _totalReclaimableSize;
    BOOL _accurateSizes;
    int _ownerPid;
    unsigned long long _totalWiredSize;
    NSMutableArray *_memoryRegions;
    NSMutableDictionary *_processMemoryRegions;
    FPRangeList *_rangeList;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
