@class NSTimeZone, NSString, NSUserActivity, NSURL, NSDate, NSData, EKTravelEngineHypothesis;

@interface EKCalendarItemAlertInfo : NSObject <NSCopying>

@property (nonatomic) long long triggerType;
@property (readonly, nonatomic) NSString *recordID;
@property (readonly, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *eventTimeZone;
@property (readonly, nonatomic) NSUserActivity *appLink;
@property (readonly, nonatomic) NSURL *action;
@property (readonly, nonatomic) NSURL *entityID;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, nonatomic) BOOL tentative;
@property (readonly, nonatomic) long long proximity;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) BOOL acknowledged;
@property (readonly, nonatomic) NSString *dismissalID;
@property (readonly, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) BOOL refiring;
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart;
@property (readonly, nonatomic) BOOL isPseudoEvent;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) BOOL hasGeoLocationCoordinates;
@property (nonatomic) struct CLLocationCoordinate2D { double latitude; double longitude; } geoLocationCoordinates;
@property (nonatomic) BOOL hasOrganizerThatIsNotCurrentUser;
@property (retain, nonatomic) NSString *organizerEmailAddress;
@property (retain, nonatomic) NSString *startLocationRouting;
@property (retain, nonatomic) NSString *locationAddress;
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis;
@property (retain, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (retain, nonatomic) NSDate *lastTimeBulletinAdded;
@property (nonatomic) BOOL isSuggestedLocation;
@property (nonatomic) BOOL isOnSharedCalendar;
@property (nonatomic) BOOL hasDisplayedLeaveByMessage;
@property (nonatomic) BOOL hasDisplayedLeaveNowMessage;
@property (nonatomic) BOOL hasDisplayedRunningLateMessage;
@property (nonatomic) unsigned long long currentRouteHypothesizerNotificationType;
@property (retain, nonatomic) NSDate *fireDate;
@property (readonly, nonatomic) BOOL isPurelyATimeToLeaveAlert;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 location:(id)a1 date:(id)a2 endDate:(id)a3 timeZone:(id)a4 allDay:(BOOL)a5 tentative:(BOOL)a6 publisherBulletinID:(id)a7 entityID:(id)a8 appLink:(id)a9 action:(id)a10 proximity:(long long)a11 externalID:(id)a12 acknowledged:(BOOL)a13 dismissalID:(id)a14 alarmID:(id)a15 isOffsetFromTravelTimeStart:(BOOL)a16 refiring:(BOOL)a17 pseudoEvent:(BOOL)a18;
- (void)resetTimeToLeaveDisplayState;

@end
