@interface CalendarColors : NSObject

+ (void)initialize;
+ (id)grayColor;
+ (id)colorNamesOrderedForAssignment;
+ (int)countOfColor:(id)a0 inArray:(id)a1;
+ (void)_bootstrapColorNameMapping;
+ (void)_rebuildColors;
+ (id)symbolicColorForNewCalendarWithExistingSymbolicNames:(id)a0;
+ (id)defaultCalendarColorNames;
+ (id)nameOfColor:(id)a0;
+ (id)colorForName:(id)a0;
+ (id)birthdayCalendarColor;
+ (id)facebookCalendarColor;
+ (id)textColorForName:(id)a0;
+ (id)localizedColorNameForColorName:(id)a0;

@end
