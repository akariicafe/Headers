@class NSURL, NSString, NSDate;

@interface CalDAVRecurrenceSplitAction : NSObject

@property (readonly, nonatomic) NSURL *resourceURL;
@property (readonly, nonatomic) NSDate *recurrenceDate;
@property (readonly, nonatomic) NSString *uidForCreatedSeries;
@property (readonly, nonatomic) BOOL isFloating;
@property (readonly, nonatomic) BOOL isAllDay;

- (void).cxx_destruct;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 uidForCreatedSeries:(id)a2 floating:(BOOL)a3 allday:(BOOL)a4;

@end
