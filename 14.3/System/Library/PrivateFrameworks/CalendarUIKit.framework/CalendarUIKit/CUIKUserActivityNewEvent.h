@class NSTimeZone, NSString, NSURL, NSDate;

@interface CUIKUserActivityNewEvent : CUIKUserActivity

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSTimeZone *timeZone;
@property BOOL allDay;
@property (retain) NSString *title;
@property (retain) NSURL *url;
@property (retain) NSString *notes;
@property (retain) NSString *location;

- (void).cxx_destruct;
- (id)dictionary;
- (id)eventWithEventStore:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
