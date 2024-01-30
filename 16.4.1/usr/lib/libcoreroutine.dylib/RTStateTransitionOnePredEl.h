@class NSDate;

@interface RTStateTransitionOnePredEl : NSObject

@property (nonatomic) int numOfTrans;
@property (nonatomic) double yield;
@property (nonatomic) double predResidualStart_s;
@property (nonatomic) double resUncStart_s;
@property (nonatomic) double predResidualStop_s;
@property (nonatomic) double resUncStop_s;
@property (retain, nonatomic) NSDate *primaryStopDate;
@property (nonatomic) double latestTransTimeStart_s;
@property (nonatomic) double earliestTransTimeStart_s;
@property (nonatomic) double density;
@property (nonatomic) unsigned long long motionActivityType;

- (id)init;
- (void).cxx_destruct;

@end
