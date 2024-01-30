@interface MADResult : NSObject <NSSecureCoding> {
    unsigned long long _executionNanoseconds;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long executionNanoseconds;
@property (readonly) double executionTimeInterval;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timerange;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setExecutionNanoseconds:(unsigned long long)a0;

@end
