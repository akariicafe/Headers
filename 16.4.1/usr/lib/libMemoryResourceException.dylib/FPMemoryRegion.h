@class NSString, FPMemoryObject, FPRangeList;

@interface FPMemoryRegion : NSObject {
    unsigned char _wired : 1;
    unsigned char _inSharedCache : 1;
    unsigned char _unusedSharedCacheRegion : 1;
    unsigned char _ownedExclusivelyByParentProcess : 1;
    unsigned char _verbose : 1;
    FPRangeList *_subrangeList;
}

@property (nonatomic) FPMemoryObject *memoryObject;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *detailedName;
@property (readonly, nonatomic) NSString *fullName;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long start;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long end;
@property (nonatomic) unsigned char segment;
@property (nonatomic) unsigned long long dirtySize;
@property (nonatomic) unsigned long long reclaimableSize;
@property (nonatomic) unsigned long long swappedSize;
@property (nonatomic) unsigned long long cleanNonSpecSize;
@property (readonly, nonatomic) unsigned long long wiredSize;
@property (nonatomic) BOOL wired;
@property (nonatomic) unsigned int user_tag;
@property (nonatomic) unsigned long long object_id;
@property (nonatomic) unsigned char share_mode;
@property (nonatomic) BOOL inSharedCache;
@property (nonatomic) BOOL unusedSharedCacheRegion;
@property (readonly, nonatomic) BOOL privateSharedCacheRegion;
@property (nonatomic) BOOL verbose;
@property (readonly, nonatomic, getter=isFake) BOOL fake;
@property (readonly, nonatomic) FPRangeList *subrangeList;
@property (readonly, nonatomic) BOOL eligibleForProcessView;
@property (nonatomic) BOOL ownedExclusivelyByParentProcess;

+ (id)categoryNameForTag:(unsigned int)a0;
+ (id)vmLedgerNameForTag:(unsigned long long)a0;

- (unsigned int)totalRegions;
- (BOOL)eligibleForSubrangesUsingPageSize:(unsigned long long)a0;
- (void)addSubrange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 memoryTotal:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; } *)a1 pageSize:(unsigned long long)a2;
- (void)freeSubrangeList;
- (id)description;
- (void).cxx_destruct;

@end
