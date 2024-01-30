@class NSDate;

@interface PHAWorkerHealthScoreEntry : NSObject

@property (readonly, nonatomic) float score;
@property (readonly, copy, nonatomic) NSDate *dateRecorded;

- (void).cxx_destruct;
- (id)initWithScore:(float)a0;

@end
