@class NSDate, NSString, NSArray, NSURL, EKStructuredLocation, NSTimeZone, EKSuggestedEventInfo, EKCalendar, UIColor;

@interface EKUIAutocompleteSearchResult : NSObject

@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (nonatomic, getter=isAllDay) BOOL allDay;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *locationWithoutPrediction;
@property (retain, nonatomic) EKStructuredLocation *preferredLocation;
@property (retain, nonatomic) NSArray *alarms;
@property (retain, nonatomic) NSArray *attendees;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSString *notes;
@property (retain, nonatomic) EKCalendar *calendar;
@property (retain, nonatomic) UIColor *calendarColor;
@property (nonatomic, getter=isSuggested) BOOL suggested;
@property (retain, nonatomic) EKSuggestedEventInfo *suggestionInfo;
@property (retain, nonatomic) NSString *foundInBundleID;

+ (BOOL)_participantShouldBeUsedForAutocomplete:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUniqueID:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
