@class MARelation;

@interface PGGraphMonthNodeCollection : PGGraphCalendarUnitNodeCollection

@property (class, readonly) MARelation *dateOfMonth;

+ (unsigned long long)calendarUnit;
+ (id)monthNodesForMonth:(long long)a0 inGraph:(id)a1;

@end
