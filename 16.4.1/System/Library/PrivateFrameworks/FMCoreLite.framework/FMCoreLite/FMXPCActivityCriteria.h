@interface FMXPCActivityCriteria : NSObject

@property (nonatomic) long long priority;
@property (nonatomic) BOOL repeating;
@property (nonatomic) long long delay;
@property (nonatomic) long long gracePeriod;
@property (nonatomic) long long interval;
@property (nonatomic) unsigned long long options;

+ (unsigned long long)_optionsFromXPCObject:(id)a0;

- (id)initWithXPCObject:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (long long)_priorityFromString:(const char *)a0;
- (id)initWithPriority:(long long)a0 repeating:(BOOL)a1 delay:(long long)a2 gracePeriod:(long long)a3 interval:(long long)a4 options:(unsigned long long)a5;
- (id)xpcDictionary;

@end
