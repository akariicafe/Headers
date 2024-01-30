@class NSString, NSArray, CLSEKParticipant, NSDate, CLSEKCalendar, CLLocation;

@interface CLSEKEvent : NSObject <NSCoding>

@property (readonly) NSString *calendarItemIdentifier;
@property (readonly) NSString *title;
@property (readonly) BOOL isBirthday;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly, getter=isAllDay) BOOL allDay;
@property (readonly) BOOL hasAttendees;
@property (readonly) NSArray *attendees;
@property (readonly) BOOL organizedByMe;
@property (readonly) CLSEKParticipant *selfAttendee;
@property (readonly) CLSEKCalendar *calendar;
@property (readonly) BOOL hasRecurrenceRules;
@property (readonly) CLLocation *geoLocation;
@property (readonly) struct CLLocationCoordinate2D { double latitude; double longitude; } coordinate;
@property (readonly) BOOL isSuggestedAndAccepted;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEKEvent:(id)a0;

@end
