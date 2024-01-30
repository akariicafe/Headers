@class NSTimeZone, NSString, NSURL, NSDate, SXFormattedText;

@interface SXPresentableCalendarEvent : NSObject

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL allDay;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) SXFormattedText *notes;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0;

@end
