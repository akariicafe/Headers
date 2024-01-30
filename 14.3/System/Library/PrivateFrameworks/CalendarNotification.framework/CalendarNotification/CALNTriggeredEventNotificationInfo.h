@class NSString, NSDictionary, NSURL, NSDate, EKStructuredLocation;

@interface CALNTriggeredEventNotificationInfo : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *location;
@property (readonly, copy, nonatomic) NSString *locationWithoutPrediction;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL isAllDay;
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

- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)a0 location:(id)a1 locationWithoutPrediction:(id)a2 startDate:(id)a3 endDate:(id)a4 isAllDay:(BOOL)a5 eventID:(id)a6 eventOccurrenceID:(id)a7 eventObjectID:(id)a8 eventRepresentationDictionary:(id)a9 legacyIdentifier:(id)a10 preferredLocation:(id)a11 conferenceURL:(id)a12 mailtoURL:(id)a13 hasSuggestedLocation:(BOOL)a14 eventHasAlarms:(BOOL)a15 allowsLocationAlerts:(BOOL)a16 forceDisplayOfNewTravelAdvisoryHypotheses:(BOOL)a17;

@end
