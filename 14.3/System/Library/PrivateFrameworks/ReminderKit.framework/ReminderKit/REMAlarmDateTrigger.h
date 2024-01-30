@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *dateComponents;

+ (id)cdEntityName;

- (void).cxx_destruct;
- (id)initWithDateComponents:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isTemporal;
- (id)description;
- (id)initWithObjectID:(id)a0 dateComponents:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)_deepCopy;
- (void)encodeWithCoder:(id)a0;

@end
