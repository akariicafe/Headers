@class NSString, NSArray, NSNumber, NSMutableArray;

@interface TIUserModelIndexedCounter : NSObject {
    NSMutableArray *_persisted;
    NSMutableArray *_current;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) int dataType;
@property (readonly, nonatomic) int bucketCount;
@property (readonly, nonatomic) NSArray *currentCounts;
@property (readonly, nonatomic) NSArray *counts;
@property (readonly, nonatomic) NSNumber *aggregatedCount;
@property (readonly, nonatomic) int days;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)aggregatedCountForNumberOfDays:(int)a0;
- (id)_createEmptyCountsArray;
- (id)countsForNumberOfDays:(int)a0;
- (void)doPersist:(id)a0 forDate:(id)a1 forContext:(id)a2;
- (void)extendToNumberOfDays:(int)a0;
- (void)prepareBuckets;
- (void)updateWithDouble:(double)a0 forIndex:(int)a1;
- (void)updateWithInteger:(int)a0 forIndex:(int)a1;
- (void)updateWithLoadedInteger:(int)a0 andDouble:(double)a1 forIndex:(int)a2 andDaysPrior:(int)a3;

@end
