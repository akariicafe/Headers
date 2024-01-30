@interface CKDateUtilities : NSObject

+ (id)thisYearDateFormatter;
+ (id)thePastDateFormatterNoTime;
+ (id)thisYearDateFormatterNoTime;
+ (id)thisWeekRelativeDateFormatterNoTime;
+ (id)relativeDateFormatterFromDate:(id)a0 toDate:(id)a1;
+ (id)relativeDateOnlyFormatterFromDate:(id)a0 toDate:(id)a1;
+ (id)thePastDateFormatter;
+ (id)thisWeekRelativeDateFormatter;

@end
