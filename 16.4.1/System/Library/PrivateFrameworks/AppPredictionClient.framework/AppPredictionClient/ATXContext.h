@class CLLocation, NSDateInterval;

@interface ATXContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) unsigned long long contextType;
@property (readonly, nonatomic) NSDateInterval *timeWindow;

+ (id)defaultTimeWindowForContextType:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContextType:(unsigned long long)a0 location:(id)a1 timeWindow:(id)a2;

@end
