@class NSDate, NSString, NSArray, NSURL, EKObject, EKStructuredLocation, EKCalendarItem, EKCalendar;

@interface EKAlarm : EKObject <NSCopying>

@property (readonly, nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isSnoozed;
@property (nonatomic, getter=isDefaultAlarm) BOOL defaultAlarm;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) EKObject *owner;
@property (readonly, nonatomic) EKCalendar *calendarOwner;
@property (readonly, nonatomic) EKCalendarItem *calendarItemOwner;
@property (retain, nonatomic) EKAlarm *originalAlarm;
@property (copy, nonatomic) NSArray *snoozedAlarms;
@property (nonatomic) double relativeOffset;
@property (copy, nonatomic) NSDate *absoluteDate;
@property (copy, nonatomic) EKStructuredLocation *structuredLocation;
@property (nonatomic) long long proximity;
@property (readonly, nonatomic) long long type;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSURL *url;

+ (long long)maxPublicProximity;
+ (id)knownSingleValueKeysForComparison;
+ (id)alarmWithRelativeOffset:(double)a0;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownRelationshipMultiValueKeys;
+ (int)_currentAuthorizationStatus;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)a0;
+ (BOOL)areLocationsAvailable;
+ (BOOL)areLocationsAllowed;
+ (id)alarmWithAbsoluteDate:(id)a0;
+ (BOOL)areLocationsCurrentlyEnabled;
+ (double)defaultGeofencedReminderRadius;
+ (Class)frozenClass;

- (BOOL)_reset;
- (void)setUUID:(id)a0;
- (void)setAcknowledgedDate:(id)a0;
- (id)acknowledgedDate;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)alarmType;
- (long long)compare:(id)a0;
- (void)setAlarmType:(long long)a0;
- (id)description;
- (id)semanticIdentifier;
- (id)ownerUUID;
- (BOOL)defaultAlarm;
- (BOOL)validateWithOwner:(id)a0 error:(id *)a1;
- (id)initWithAbsoluteDate:(id)a0;
- (id)initWithRelativeOffset:(double)a0;
- (id)relativeOffsetRaw;
- (void)setRelativeOffsetRaw:(id)a0;
- (void)addSnoozedAlarm:(id)a0;
- (void)removeSnoozedAlarm:(id)a0;
- (BOOL)isTopographicallyEqualToAlarm:(id)a0;

@end
