@interface REMAlarmTimeIntervalTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double timeInterval;

+ (id)cdEntityName;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isTemporal;
- (id)description;
- (id)initWithTimeInterval:(double)a0;
- (id)initWithObjectID:(id)a0 timeInterval:(double)a1;
- (BOOL)isEqual:(id)a0;
- (id)_deepCopy;
- (void)encodeWithCoder:(id)a0;

@end
