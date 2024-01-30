@class NSString, REMAlarmTrigger, REMObjectID, NSDate;

@interface REMAlarm : NSObject <REMObjectIDProviding, NSSecureCoding>

@property (class, readonly, nonatomic) NSString *cdEntityName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMAlarmTrigger *trigger;
@property (retain, nonatomic) NSDate *acknowledgedDate;
@property (retain, nonatomic) NSString *alarmUID;
@property (retain, nonatomic) NSString *originalAlarmUID;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isSnooze;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithAlarm:(id)a0 objectID:(id)a1;
- (id)description;
- (id)initWithTrigger:(id)a0;
- (BOOL)isContentEqual:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAcknowledged;
- (id)initWithTrigger:(id)a0 objectID:(id)a1;
- (BOOL)isOriginal;
- (void)encodeWithCoder:(id)a0;

@end
