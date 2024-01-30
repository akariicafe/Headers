@class NSDictionary;

@interface PLThreadStats : NSObject

@property (retain) NSDictionary *processThreadMap;
@property double absoluteTimeFilter;
@property unsigned long long percentTimeFilter;
@property (retain) NSDictionary *currentSnapshot;

+ (id)getThreadName:(unsigned long long)a0 inProcess:(int)a1 isNamed:(BOOL *)a2;

- (void).cxx_destruct;
- (id)diffSinceLastSnapshot;
- (id)diffSnapshotWithNew:(id)a0 andOld:(id)a1;
- (id)filterDiff:(id)a0;
- (id)initWithTimeFilter:(double)a0 withPercentFilter:(unsigned long long)a1 withProcessThreadMapping:(id)a2 withError:(id *)a3;
- (BOOL)shouldGatherStatsForProcessName:(id)a0;
- (BOOL)shouldIncludeThread:(id)a0 withTotalSystemTime:(double)a1 withTotalUserTime:(double)a2;

@end
