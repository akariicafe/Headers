@interface TTSTimerObject : NSObject

@property (nonatomic) double endTime;
@property (nonatomic) long long intId;
@property (nonatomic) double remainingTime;
@property (copy, nonatomic) id /* block */ block;

- (void)dealloc;
- (id)description;

@end
