@class EKCalendar, NSString, NSURL, NSDate, NSNumber, EKCalendarItem;

@interface EKResourceChange : EKObject <EKIdentityProtocol>

@property (readonly, retain, nonatomic) EKCalendar *calendar;
@property (readonly, retain, nonatomic) EKCalendarItem *calendarItem;
@property (readonly, copy, nonatomic) NSString *changedByDisplayName;
@property (readonly, copy, nonatomic) NSURL *changedByAddress;
@property (readonly, copy, nonatomic) NSString *changedByFirstName;
@property (readonly, copy, nonatomic) NSString *changedByLastName;
@property (readonly, nonatomic) unsigned int changeType;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL dateChanged;
@property (readonly, nonatomic) BOOL timeChanged;
@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) NSNumber *createCount;
@property (readonly, nonatomic) NSNumber *updateCount;
@property (readonly, nonatomic) NSNumber *deleteCount;
@property (readonly, nonatomic) NSString *deletedTitle;
@property (readonly, nonatomic) BOOL alerted;
@property (readonly, nonatomic) unsigned int publicStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)knownRelationshipSingleValueKeys;
+ (Class)frozenClass;
+ (id)calendarItemPropertyName;
+ (id)knownRelationshipWeakKeys;

- (id)phoneNumber;
- (id)emailAddress;
- (unsigned int)changedProperties;
- (BOOL)_propertyWithFlagDidChange:(unsigned int)a0;
- (id)notification;
- (id)URL;
- (id)name;
- (id)lastName;
- (void)clearAlertedStatus;
- (id)firstName;

@end
