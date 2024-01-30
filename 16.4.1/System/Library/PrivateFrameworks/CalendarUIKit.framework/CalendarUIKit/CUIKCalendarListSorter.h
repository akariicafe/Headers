@interface CUIKCalendarListSorter : NSObject

+ (id /* block */)ekCalendarComparator;
+ (id /* block */)ekOtherCalendarComparator;
+ (id /* block */)ekSourceComparator;
+ (long long)orderForOtherCalendar:(id)a0;

@end
