@class MARelation;

@interface PGGraphWeekOfYearNodeCollection : PGGraphCalendarUnitNodeCollection

@property (class, readonly) MARelation *dateOfWeekOfYear;

+ (unsigned long long)calendarUnit;
+ (id)weekOfYearNodesForWeekOfYear:(long long)a0 inGraph:(id)a1;

@end
