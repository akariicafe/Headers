@class NSDictionary;

@interface LRRReplayResultStat : NSObject

@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic) unsigned int nluResponseTrueCount;
@property (nonatomic) unsigned int topUserParseTrueCount;
@property (nonatomic) unsigned int mdRequestTrueCount;
@property (nonatomic) unsigned int mdResponseTrueCount;
@property (nonatomic) unsigned int mrRequestTrueCount;
@property (nonatomic) unsigned int mrResponseTrueCount;
@property (nonatomic) NSDictionary *userIsHabitualUserByWeek;

- (id)init;
- (void)append:(id)a0;

@end
