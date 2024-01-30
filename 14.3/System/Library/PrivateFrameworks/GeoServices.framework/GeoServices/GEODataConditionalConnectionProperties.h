@interface GEODataConditionalConnectionProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long workLoad;
@property (readonly, nonatomic) double timeWindowStartTime;
@property (readonly, nonatomic) double timeWindowDuration;

- (id)initWithCoder:(id)a0;
- (id)initWithWorkload:(unsigned long long)a0 timeWindowDuration:(double)a1;
- (id)initWithWorkload:(unsigned long long)a0 timeWindowStartTime:(double)a1 timeWindowDuration:(double)a2;
- (void)encodeWithCoder:(id)a0;

@end
