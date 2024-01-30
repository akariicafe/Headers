@class NSString, NSNumber, NSDate;

@interface SANotificationObject : SADomainObject

@property (copy, nonatomic) NSString *applicationId;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSNumber *dateIsAllDay;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *notificationId;
@property (copy, nonatomic) NSNumber *previewRestricted;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSDate *recencyDate;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *type;

+ (id)object;
+ (id)objectWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
