@interface REMAlarmVehicleTrigger : REMAlarmTrigger

@property (nonatomic) long long event;

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;

- (id)initWithEvent:(long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isTemporal;
- (id)description;
- (id)initWithObjectID:(id)a0 event:(long long)a1;
- (BOOL)isEqual:(id)a0;
- (id)_deepCopy;
- (void)encodeWithCoder:(id)a0;

@end
