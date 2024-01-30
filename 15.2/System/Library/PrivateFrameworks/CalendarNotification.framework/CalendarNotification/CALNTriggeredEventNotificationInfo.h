@class NSString, NSDictionary, NSURL, NSDate, EKStructuredLocation;

@interface CALNTriggeredEventNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isAllDay;
@property (readonly, nonatomic) BOOL isTimeSensitive;
@property (readonly, copy, nonatomic) NSString *eventID;
@property (readonly, copy, nonatomic) NSString *eventOccurrenceID;
@property (readonly, copy, nonatomic) NSString *eventObjectID;
@property (readonly, copy, nonatomic) NSDictionary *eventRepresentationDictionary;
@property (readonly, copy, nonatomic) NSString *legacyIdentifier;
@property (readonly, nonatomic) EKStructuredLocation *preferredLocation;
@property (readonly, copy, nonatomic) NSURL *conferenceURL;
@property (readonly, copy, nonatomic) NSURL *mailtoURL;
@property (readonly, nonatomic) BOOL hasSuggestedLocation;
@property (readonly, nonatomic) BOOL eventHasAlarms;
@property (readonly, nonatomic) BOOL allowsLocationAlerts;
@property (readonly, nonatomic) BOOL forceDisplayOfNewTravelAdvisoryHypotheses;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 location:(id)a1 locationWithoutPrediction:(id)a2 startDate:(id)a3 endDate:(id)a4 isAllDay:(BOOL)a5 isTimeSensitive:(BOOL)a6 eventID:(id)a7 eventOccurrenceID:(id)a8 eventObjectID:(id)a9 eventRepresentationDictionary:(id)a10 legacyIdentifier:(id)a11 preferredLocation:(id)a12 conferenceURL:(id)a13 mailtoURL:(id)a14 hasSuggestedLocation:(BOOL)a15 eventHasAlarms:(BOOL)a16 allowsLocationAlerts:(BOOL)a17 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)a18;

@end
