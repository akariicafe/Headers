@interface CNPropertyGroupDateItem : CNPropertyGroupItem

+ (void)initialize;
+ (id)calendarForLabel:(id)a0;
+ (id)dateDisplayStringFromComponents:(id)a0;
+ (id)emptyValueForLabel:(id)a0;
+ (id)initialValueForLabel:(id)a0 group:(id)a1;
+ (BOOL)isEmptyDateComponents:(id)a0;
+ (id)localeAndCalendarPairFromDateComponents:(id)a0;
+ (id)propertyGroupItemWithLabeledValue:(id)a0 group:(id)a1 contact:(id)a2;

- (id)defaultActionURL;
- (id)normalizedValue;
- (BOOL)isValidValue:(id)a0;
- (BOOL)isEmpty;
- (id)bestValue:(id)a0;
- (id)displayStringForValue:(id)a0;
- (BOOL)isEquivalentToItem:(id)a0;
- (id)placeholderString;
- (id)valueForDisplayString:(id)a0;

@end
