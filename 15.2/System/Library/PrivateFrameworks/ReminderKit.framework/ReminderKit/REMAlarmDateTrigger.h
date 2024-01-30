@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDateComponents *dateComponents;

+ (id)cdEntityName;

- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)description;
- (id)initWithDateComponents:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isTemporal;
- (id)initWithObjectID:(id)a0 dateComponents:(id)a1;

@end
