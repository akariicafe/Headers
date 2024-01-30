@class NSString, NSDictionary, NSURL, NSDate, EKStructuredLocation, EKTravelEngineHypothesis;

@interface CALNTriggeredEventNotificationSourceNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) BOOL isTimeSensitive;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) BOOL isLocationEvent;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, copy, nonatomic) NSString *eventObjectID;
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary;
@property (readonly, copy, nonatomic) NSString *legacyIdentifier;
@property (readonly, copy, nonatomic) NSURL *mapItemURL;
@property (readonly, copy, nonatomic) NSURL *conferenceURL;
@property (readonly, copy, nonatomic) NSURL *mailtoURL;
@property (readonly, nonatomic) BOOL hasSuggestedLocation;
@property (readonly, nonatomic) BOOL eventHasAlarms;
@property (readonly, copy, nonatomic) NSString *alarmID;
@property (readonly, nonatomic) BOOL isOffsetFromTravelTimeStart;
@property (readonly, copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime;
@property (readonly, nonatomic) BOOL allowsLocationAlerts;
@property (readonly, copy, nonatomic) EKTravelEngineHypothesis *hypothesis;
@property (readonly, nonatomic) unsigned long long travelAdvisoryTimelinessPeriod;
@property (readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 location:(id)a1 locationWithoutPrediction:(id)a2 preferredLocation:(id)a3 startDate:(id)a4 endDate:(id)a5 isAllDay:(BOOL)a6 isTimeSensitive:(BOOL)a7 launchURL:(id)a8 isLocationEvent:(BOOL)a9 eventID:(id)a10 eventObjectID:(id)a11 eventRepresentationDictionary:(id)a12 legacyIdentifier:(id)a13 mapItemURL:(id)a14 conferenceURL:(id)a15 mailtoURL:(id)a16 hasSuggestedLocation:(BOOL)a17 eventHasAlarms:(BOOL)a18 alarmID:(id)a19 isOffsetFromTravelTimeStart:(BOOL)a20 lastFireTimeOfAlertOffsetFromTravelTime:(id)a21 allowsLocationAlerts:(BOOL)a22 hypothesis:(id)a23 travelAdvisoryTimelinessPeriod:(unsigned long long)a24 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)a25;

@end
