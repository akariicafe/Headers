@interface CKDateUtilities : NSObject

+ (id)thisYearFullDateFormatterNoTime;
+ (id)relativeDateFormatterFromDate:(id)a0 toDate:(id)a1;
+ (id)relativeDateOnlyFormatterFromDate:(id)a0 toDate:(id)a1;
+ (id)relativeFullDateOnlyFormatterFromDate:(id)a0 toDate:(id)a1;
+ (id)thePastDateFormatter;
+ (id)thePastDateFormatterNoTime;
+ (id)thePastFullDateFormatterNoTime;
+ (id)thisWeekRelativeDateFormatter;
+ (id)thisWeekRelativeDateFormatterNoTime;
+ (id)thisYearDateFormatter;
+ (id)thisYearDateFormatterNoTime;

@end
