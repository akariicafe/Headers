@interface PKDurationSnapshot : NSObject

@property (nonatomic, readonly) void /* unknown type, empty encoding */ snapshotTime;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ rate;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ elapsedDuration;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ duration;

- (id)init;
- (id)initWithSnapshotTime:(double)a0 rate:(float)a1 elapsedDuration:(double)a2 duration:(double)a3;

@end
