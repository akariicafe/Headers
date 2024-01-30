@class NSString, NSDictionary, NSURL, NSDate, EKStructuredLocation, EKTravelEngineHypothesis;

@interface CALNTriggeredEventNotificationSourceNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isAllDay;
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

- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)a0 location:(id)a1 locationWithoutPrediction:(id)a2 preferredLocation:(id)a3 startDate:(id)a4 endDate:(id)a5 isAllDay:(BOOL)a6 launchURL:(id)a7 isLocationEvent:(BOOL)a8 eventID:(id)a9 eventObjectID:(id)a10 eventRepresentationDictionary:(id)a11 legacyIdentifier:(id)a12 mapItemURL:(id)a13 conferenceURL:(id)a14 mailtoURL:(id)a15 hasSuggestedLocation:(BOOL)a16 eventHasAlarms:(BOOL)a17 alarmID:(id)a18 isOffsetFromTravelTimeStart:(BOOL)a19 lastFireTimeOfAlertOffsetFromTravelTime:(id)a20 allowsLocationAlerts:(BOOL)a21 hypothesis:(id)a22 travelAdvisoryTimelinessPeriod:(unsigned long long)a23 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)a24;

@end
