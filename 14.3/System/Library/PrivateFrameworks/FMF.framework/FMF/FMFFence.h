@class FMFSchedule, NSString, NSArray, FMFPlacemark, NSDate, CLLocation;

@interface FMFFence : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSString *genericFriendName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayLocationName;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSArray *followerIds;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *friendIdentifier;
@property (retain, nonatomic) NSString *createdByIdentifier;
@property (retain, nonatomic) NSString *pendingIdentifier;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) FMFPlacemark *placemark;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSString *trigger;
@property (retain, nonatomic) NSString *type;
@property (nonatomic) unsigned long long locationType;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isRecurring) BOOL recurring;
@property (nonatomic, getter=isFromMe) BOOL fromMe;
@property (retain, nonatomic) FMFSchedule *schedule;
@property (retain, nonatomic) NSDate *muteEndDate;
@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSString *ckRecordZoneOwnerName;
@property (retain, nonatomic) NSString *acceptanceStatus;
@property (readonly, nonatomic, getter=isRegionAllowed) BOOL regionAllowed;
@property (readonly, nonatomic, getter=isOnMe) BOOL onMe;
@property (readonly, getter=isSupported) BOOL supported;
@property (readonly, nonatomic, getter=shouldUseCloudKitStore) BOOL useCloudKitStore;
@property (readonly, nonatomic, getter=shouldUseIDSTrigger) BOOL useIDSTrigger;
@property (readonly, nonatomic, getter=isMuted) BOOL isMuted;
@property (readonly, nonatomic, getter=inviteDate) NSDate *inviteDate;

+ (id)endDateForMuteTimespan:(unsigned long long)a0;
+ (BOOL)isAllowedAtLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedNotificationStringForFollower:(id)a0 locationName:(id)a1;
- (id)localizedRequestNotificationStringForFollower:(id)a0 locationName:(id)a1;
- (id)localizedWillBeNotifiedStringForFollower:(id)a0 locationName:(id)a1;
- (id)localizedSubtitleStringWithLocationName:(id)a0;
- (id)locationForDictionary:(id)a0;
- (id)handlesForArray:(id)a0;
- (id)initWithRecipient:(id)a0 location:(id)a1 placemark:(id)a2 label:(id)a3 trigger:(id)a4 type:(id)a5 locationType:(unsigned long long)a6 recurring:(BOOL)a7;
- (void)updateFenceLocation:(id)a0 placemark:(id)a1 label:(id)a2 trigger:(id)a3 type:(id)a4 locationType:(unsigned long long)a5;
- (void)updateFenceMuteEndDate:(id)a0;

@end
