@class NSMutableDictionary, NSString, NSMutableArray, FPRangeList;

@interface FPMemoryObject : NSObject <NSCopying> {
    BOOL _accurateSizes;
}

@property (retain, nonatomic) NSMutableArray *memoryRegions;
@property (retain, nonatomic) NSMutableDictionary *processMemoryRegions;
@property (retain, nonatomic) FPRangeList *rangeList;
@property (readonly, nonatomic) unsigned long long totalDirtySize;
@property (readonly, nonatomic) unsigned long long totalCleanSize;
@property (readonly, nonatomic) unsigned long long totalReclaimableSize;
@property (readonly, nonatomic) unsigned long long totalSwappedSize;
@property (readonly, nonatomic) unsigned long long totalWiredSize;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *detailedName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL verbose;
@property (readonly, nonatomic) BOOL containsFakeRegion;
@property (nonatomic) int ownerPid;
@property (readonly, nonatomic) BOOL couldHaveProcessView;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)finalize;
- (void)addRegion:(id)a0 pageSize:(unsigned long long)a1;
- (void)_addRegion:(id)a0 pageSize:(unsigned long long)a1 forProcess:(id)a2;
- (void)finalizeUsingRegionDirtySize:(BOOL)a0;
- (id)_canonicalRegion;
- (void)addRegion:(id)a0 forProcess:(id)a1;
- (id)viewForProcess:(id)a0;

@end
