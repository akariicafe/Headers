@class PPCalendar, NSString, NSArray, NSURL, NSDate, CLLocation, EKObjectID;

@interface PPEvent : NSObject <NSSecureCoding, NSCopying> {
    NSString *_externalURIString;
    NSString *_urlString;
    BOOL _attendeesStripped;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) EKObjectID *objectID;
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

+ (id)convertBatchOfEKEvents:(id)a0 calendarInternPool:(id)a1;
+ (id /* block */)deferredAllocationEventFromEKEvent:(id)a0;
+ (id)descriptionForSuggestedEventCategory:(unsigned char)a0;
+ (unsigned char)suggestedEventCategoryFromMetadata:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToEvent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)attendeesStripped;
- (long long)compareStartDateWithEvent:(id)a0;
- (id)copyWithAttendeesStripped;
- (id)initWithEKEvent:(id)a0 calendarInternPool:(id)a1;
- (id)initWithEventIdentifier:(id)a0 objectID:(id)a1 title:(id)a2 location:(id)a3 calendar:(id)a4 startDate:(id)a5 endDate:(id)a6 availability:(char)a7 externalURI:(id)a8 attendees:(id)a9 organizerName:(id)a10 eventFlags:(unsigned char)a11 notes:(id)a12 url:(id)a13 structuredLocationTitle:(id)a14 structuredLocationAddress:(id)a15 structuredLocationCoordinates:(id)a16 suggestedEventCategory:(unsigned char)a17;
- (id)initWithEventIdentifier:(id)a0 objectID:(id)a1 title:(id)a2 location:(id)a3 calendar:(id)a4 startDate:(id)a5 endDate:(id)a6 availability:(char)a7 externalURIString:(id)a8 attendees:(id)a9 organizerName:(id)a10 eventFlags:(unsigned char)a11 notes:(id)a12 urlString:(id)a13 structuredLocationTitle:(id)a14 structuredLocationAddress:(id)a15 structuredLocationCoordinates:(id)a16 suggestedEventCategory:(unsigned char)a17;
- (BOOL)isNLEvent;
- (BOOL)isStructuredEvent;
- (BOOL)organizerIsCurrentUser;
- (BOOL)representsUnscheduledFreeTime;

@end
