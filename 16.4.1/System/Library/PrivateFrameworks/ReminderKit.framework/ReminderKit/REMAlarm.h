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

+ (id)objectIDWithUUID:(id)a0;
+ (id)newObjectID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTrigger:(id)a0;
- (BOOL)isOriginal;
- (BOOL)isContentEqual:(id)a0;
- (id)initWithAlarm:(id)a0 objectID:(id)a1;
- (id)initWithTrigger:(id)a0 objectID:(id)a1;
- (BOOL)isAcknowledged;
- (BOOL)isSnooze;

@end
