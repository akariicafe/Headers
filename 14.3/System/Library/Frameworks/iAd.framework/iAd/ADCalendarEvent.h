@class NSString, NSDate, EKRecurrenceRule, NSObject;
@protocol OS_dispatch_queue;

@interface ADCalendarEvent : NSObject

@property (copy, nonatomic) NSString *eventDescription;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSDate *start;
@property (retain, nonatomic) NSDate *end;
@property (nonatomic) BOOL allDay;
@property (retain, nonatomic) EKRecurrenceRule *recurrence;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calendarEventQueue;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)EKEventInEventStore:(id)a0;
- (void)retrieveEventInEventStore:(id)a0 byIdentifier:(id)a1 withBlock:(id /* block */)a2;
- (id)_recurrenceRuleFromDictionary:(id)a0;
- (BOOL)_eventIsEqualToCalendarEvent:(id)a0;

@end
