@class HMDTimePeriodElement;

@interface HMDTimePeriodNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding>

@property (readonly) HMDTimePeriodElement *startElement;
@property (readonly) HMDTimePeriodElement *endElement;

+ (BOOL)supportsSecureCoding;
+ (id)type;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithStartElement:(id)a0 endElement:(id)a1;
- (id)timePeriodElementFromDictionary:(id)a0;

@end
