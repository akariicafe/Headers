@interface CNPropertyGroupBirthdayItem : CNPropertyGroupDateItem

+ (id)_dateForGroup:(id)a0;
+ (id)calendarForLabel:(id)a0;
+ (id)initialValueForLabel:(id)a0 group:(id)a1;

- (id)displayLabel;
- (id)labeledValueToCurateFromSuggestion;
- (void)updateLabeledValueWithLabel:(id)a0;

@end
