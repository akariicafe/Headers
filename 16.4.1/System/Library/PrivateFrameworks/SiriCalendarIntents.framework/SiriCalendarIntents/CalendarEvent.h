@class DateComponentsRange, NSString, CLPlacemark, EventCalendar;

@interface CalendarEvent : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *eventIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) CLPlacemark *location;
@property (nonatomic) long long status;
@property (nonatomic, retain) DateComponentsRange *dateTimeRange;
@property (nonatomic) long long availability;
@property (nonatomic, retain) EventCalendar *calendar;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
