@class NSTimeZone, NSString, NSURL, NSDate, SXFormattedText, SXJSONDictionary;

@interface SXCalendarEventAction : NSObject <SXAction>

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL allDay;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) SXFormattedText *notes;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0;

@end
