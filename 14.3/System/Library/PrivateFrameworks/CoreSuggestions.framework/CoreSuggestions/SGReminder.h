@class NSString, SGLocation, NSURL, NSDateComponents, NSDate;

@interface SGReminder : SGObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSDateComponents *dueDateComponents;
@property (readonly, nonatomic) unsigned char dueLocationType;
@property (readonly, nonatomic) SGLocation *dueLocation;
@property (readonly, nonatomic) unsigned char dueLocationTrigger;
@property (readonly, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *opaqueKey;
@property (readonly, nonatomic) NSString *uniqueKey;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) unsigned char reminderStatus;

+ (id)describeReminderStatus:(unsigned char)a0;
+ (id)describeReminderDueLocationTrigger:(unsigned char)a0;
+ (id)describeReminderDueLocationType:(unsigned char)a0;

- (id)initWithRecordId:(id)a0 origin:(id)a1 title:(id)a2 dueDateComponents:(id)a3 dueLocationType:(unsigned char)a4 dueLocation:(id)a5 dueLocationTrigger:(unsigned char)a6 sourceURL:(id)a7 reminderStatus:(unsigned char)a8 opaqueKey:(id)a9 uniqueKey:(id)a10 contactIdentifier:(id)a11 creationDate:(id)a12;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isAllDay;
- (id)loggingIdentifier;
- (id)description;
- (BOOL)isEqualToReminder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
