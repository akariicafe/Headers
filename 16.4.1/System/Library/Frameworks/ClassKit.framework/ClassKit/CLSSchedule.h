@class NSString, NSDate;

@interface CLSSchedule : CLSObject <CLSRelationable> {
    long long _scheduledEntityType;
    long long _scheduleAction;
    NSDate *_scheduleDate;
    long long _scheduleUpdateStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long scheduledEntityType;
@property (nonatomic) long long scheduleAction;
@property (nonatomic) long long scheduleUpdateStatus;
@property (retain, nonatomic) NSDate *scheduleDate;

+ (id)relations;
+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)mergeWithObject:(id)a0;
- (id)initForObject:(id)a0 scheduleDate:(id)a1;

@end
