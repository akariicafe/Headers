@class NSString, FPMemoryObject;

@interface FPMemoryCategory : NSObject {
    BOOL _isSummary;
}

@property (retain, nonatomic) FPMemoryObject *firstMemoryObject;
@property (nonatomic) unsigned long long totalDirtySize;
@property (nonatomic) unsigned long long totalSwappedSize;
@property (nonatomic) unsigned long long totalCleanSize;
@property (nonatomic) unsigned long long totalReclaimableSize;
@property (nonatomic) unsigned long long totalWiredSize;
@property (nonatomic) int totalRegions;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *detailedName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL verbose;

- (id)init;
- (void).cxx_destruct;
- (id)initSummary:(BOOL)a0;
- (void)addMemoryObject:(id)a0;

@end
