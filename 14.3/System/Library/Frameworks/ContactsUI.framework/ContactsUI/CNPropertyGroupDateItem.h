@interface CNPropertyGroupDateItem : CNPropertyGroupItem

+ (void)initialize;
+ (id)calendarForLabel:(id)a0;
+ (id)initialValueForLabel:(id)a0 group:(id)a1;
+ (id)emptyValueForLabel:(id)a0;
+ (BOOL)isEmptyDateComponents:(id)a0;

- (id)displayStringForValue:(id)a0;
- (id)bestValue:(id)a0;
- (BOOL)isEmpty;
- (BOOL)isEquivalentToItem:(id)a0;
- (id)localeAndCalendarPairFromDateComponents:(id)a0;
- (id)valueForDisplayString:(id)a0;
- (id)defaultActionURL;
- (id)normalizedValue;
- (id)placeholderString;
- (BOOL)isValidValue:(id)a0;

@end
