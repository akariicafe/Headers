@class NSString, FPMemoryObject;

@interface FPMemoryCategory : NSObject {
    BOOL _isSummary;
    NSString *_name;
    FPMemoryObject *_firstMemoryObject;
}

@property (nonatomic) unsigned long long totalDirtySize;
@property (nonatomic) unsigned long long totalSwappedSize;
@property (nonatomic) unsigned long long totalCleanSize;
@property (nonatomic) unsigned long long totalReclaimableSize;
@property (nonatomic) unsigned long long totalWiredSize;
@property (nonatomic) unsigned int totalRegions;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *detailedName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL verbose;

- (id)initSummary:(BOOL)a0;
- (id)init;
- (void)addMemoryObject:(id)a0;
- (void).cxx_destruct;

@end
