@class NSMutableArray;

@interface RTStateDepictionOnePredEl : NSObject

@property (nonatomic) int numOfClustEntries;
@property (nonatomic) double aggregateTime_s;
@property (nonatomic) double latestVisitTime_s;
@property (nonatomic) double earliestVisitTime_s;
@property (retain, nonatomic) NSMutableArray *visitHist;
@property (nonatomic) double density;

- (void).cxx_destruct;
- (id)init;

@end
