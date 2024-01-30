@interface Score : NSObject

@property (nonatomic) double upPct;
@property (nonatomic) double overallStay;
@property (nonatomic) double handicapStay;
@property (nonatomic) double epochs;
@property (nonatomic) double lqmTransitionCount;
@property (nonatomic) double connSuccesses;
@property (nonatomic) double connAttempts;

- (id)description;

@end
