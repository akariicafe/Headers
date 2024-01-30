@class NSString, NSDictionary;

@interface LRRSampleReplayResult : NSObject

@property (copy, nonatomic) NSString *sourceRequestId;
@property (copy, nonatomic) NSString *replayedRequestId;
@property (nonatomic) BOOL evaluated;
@property (copy, nonatomic) NSDictionary *comparatorResults;
@property (copy, nonatomic) NSString *strRequestStart;
@property (nonatomic) double requestStartTs;
@property (copy, nonatomic) NSString *strRequestEnd;
@property (nonatomic) double requestEndTs;
@property (nonatomic) double timeRequestInterval;
@property (nonatomic) unsigned int repetitionCount;
@property (nonatomic) BOOL userWasHabitualInSameWeek;
@property (nonatomic) long long errorCode;

- (id)init;
- (void).cxx_destruct;

@end
