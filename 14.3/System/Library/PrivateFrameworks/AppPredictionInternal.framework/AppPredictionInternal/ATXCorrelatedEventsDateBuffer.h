@interface ATXCorrelatedEventsDateBuffer : NSObject

@property (readonly, nonatomic) double bufferSeconds;
@property (readonly, nonatomic) long long bufferType;

- (id)initWithBufferSeconds:(double)a0 andBufferType:(long long)a1;
- (id)startDateWithBufferForEvent:(id)a0;
- (id)endDateWithBufferForEvent:(id)a0;

@end
