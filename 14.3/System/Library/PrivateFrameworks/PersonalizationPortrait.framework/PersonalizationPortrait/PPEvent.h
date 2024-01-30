@class PPCalendar, NSString, NSArray, NSURL, NSDate, CLLocation;

@interface PPEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) PPCalendar *calendar;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) char availability;
@property (readonly, nonatomic) NSURL *externalURI;
@property (readonly, nonatomic) NSArray *attendees;
@property (readonly, nonatomic) NSString *organizerName;
@property (readonly, nonatomic) unsigned char eventFlags;
@property (readonly, nonatomic) NSString *notes;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *structuredLocationTitle;
@property (readonly, nonatomic) NSString *structuredLocationAddress;
@property (readonly, nonatomic) CLLocation *structuredLocationCoordinates;
@property (readonly, nonatomic) unsigned char suggestedEventCategory;

+ (id)descriptionForSuggestedEventCategory:(unsigned char)a0;

- (unsigned char)_suggestedEventCategoryFromMetaData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareStartDateWithEvent:(id)a0;
- (BOOL)isStructuredEvent;
- (BOOL)isEqualToEvent:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isNLEvent;
- (id)initWithEventIdentifier:(id)a0 title:(id)a1 location:(id)a2 calendar:(id)a3 startDate:(id)a4 endDate:(id)a5 availability:(char)a6 externalURI:(id)a7 attendees:(id)a8 organizerName:(id)a9 eventFlags:(unsigned char)a10 notes:(id)a11 url:(id)a12 structuredLocationTitle:(id)a13 structuredLocationAddress:(id)a14 structuredLocationCoordinates:(id)a15 suggestedEventCategory:(unsigned char)a16;
- (BOOL)organizerIsCurrentUser;
- (id)initWithEKEvent:(id)a0 calendarInternPool:(id)a1;
- (BOOL)representsUnscheduledFreeTime;
- (void)encodeWithCoder:(id)a0;

@end
