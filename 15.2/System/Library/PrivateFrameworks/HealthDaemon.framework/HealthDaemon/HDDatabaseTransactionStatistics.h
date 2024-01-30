@interface HDDatabaseTransactionStatistics : NSObject

@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double duration;

- (id)_initWithStartTime:(double)a0 endTime:(double)a1;

@end
