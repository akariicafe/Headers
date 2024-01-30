@class MARelation;

@interface PGGraphWeekOfMonthNodeCollection : PGGraphCalendarUnitNodeCollection

@property (class, readonly) MARelation *dateOfWeekOfMonth;

+ (unsigned long long)calendarUnit;
+ (id)weekOfMonthNodesForWeekOfMonth:(long long)a0 inGraph:(id)a1;

@end
