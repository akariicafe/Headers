@interface ATXCorrelatedEventsDateBuffer : NSObject

@property (readonly, nonatomic) double bufferSeconds;
@property (readonly, nonatomic) long long bufferType;

- (id)endDateWithBufferForEvent:(id)a0;
- (id)initWithBufferSeconds:(double)a0 andBufferType:(long long)a1;
- (id)startDateWithBufferForEvent:(id)a0;

@end
