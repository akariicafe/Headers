@class NSString, NSDictionary;

@interface CADisplayPersistedLatency : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSDictionary *mode;
@property (nonatomic) double latency;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
