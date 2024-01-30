@class NSString, NSURL, SXFormattedText;

@interface SXCalendarEventAddition : SXAddition

@property (readonly, nonatomic) NSString *startDate;
@property (readonly, nonatomic) NSString *endDate;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) SXFormattedText *notes;

- (id)notesWithValue:(id)a0 withType:(int)a1;

@end
