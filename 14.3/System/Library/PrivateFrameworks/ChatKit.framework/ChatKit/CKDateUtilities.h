@interface CKDateUtilities : NSObject

+ (id)relativeDateFormatterFromDate:(id)a0 toDate:(id)a1;
+ (id)relativeDateOnlyFormatterFromDate:(id)a0 toDate:(id)a1;
+ (id)thisYearDateFormatter;
+ (id)thePastDateFormatterNoTime;
+ (id)thisYearDateFormatterNoTime;
+ (id)thisWeekRelativeDateFormatterNoTime;
+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;

@end
