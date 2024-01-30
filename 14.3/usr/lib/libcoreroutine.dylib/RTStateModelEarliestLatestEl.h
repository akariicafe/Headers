@interface RTStateModelEarliestLatestEl : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double earliestEl_s;
@property (nonatomic) double latestEl_s;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithEarliest:(double)a0 andLatest:(double)a1;
- (void)encodeWithCoder:(id)a0;

@end
