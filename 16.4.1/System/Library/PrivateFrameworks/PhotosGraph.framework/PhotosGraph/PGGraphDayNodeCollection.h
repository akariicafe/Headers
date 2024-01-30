@class MARelation;

@interface PGGraphDayNodeCollection : PGGraphCalendarUnitNodeCollection

@property (class, readonly) MARelation *dateOfDay;

+ (unsigned long long)calendarUnit;
+ (id)dayNodesForDay:(long long)a0 inGraph:(id)a1;

@end
