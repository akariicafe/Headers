@class NSMutableArray, TTCRVectorMultiTimestamp;

@interface CRTTCompatibleDocument : CRDocument

@property (retain, nonatomic) TTCRVectorMultiTimestamp *sharedTopotextTimestamp;
@property (retain, nonatomic) NSMutableArray *stringsWithClocksNeedingUpdating;
@property (retain, nonatomic) NSMutableArray *stringsWithClocksToResetAfterRealizingLocalChanges;

- (void).cxx_destruct;
- (id)initWithVersion:(id)a0 startVersion:(id)a1 rootObject:(id)a2 replica:(id)a3;
- (id)initWithVersion:(id)a0 startVersion:(id)a1 rootObject:(id)a2 replica:(id)a3 topoTimestamp:(id)a4;
- (unsigned long long)mergeResultForMergingWithDocument:(id)a0;
- (void)mergeTimestampWithDocument:(id)a0;
- (void)realizeLocalChanges;

@end
