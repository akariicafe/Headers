@class NSMutableSet, NSMutableArray;

@interface WDMedicalRecordPagingContext : NSObject

@property (nonatomic) BOOL shouldClearDisplayItemGroups;
@property (nonatomic) BOOL hasMoreData;
@property (nonatomic) BOOL fetchingCurrentPage;
@property (nonatomic) BOOL pagingContextReady;
@property (retain, nonatomic) NSMutableSet *computingDaySummaries;
@property (retain, nonatomic) NSMutableArray *unprocessedRecords;
@property (retain, nonatomic) NSMutableArray *contextDependentBlockQueue;
@property (retain, nonatomic) NSMutableArray *removedRecords;

+ (id)sortDateComponentsOfDate:(id)a0;
+ (id)sortDateComponentsOfDateComponents:(id)a0 withDayOffset:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (void)resetPagingContext;
- (BOOL)shouldQueryForNextBatch;

@end
