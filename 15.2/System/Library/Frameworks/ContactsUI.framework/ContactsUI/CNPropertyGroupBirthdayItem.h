@interface CNPropertyGroupBirthdayItem : CNPropertyGroupDateItem

+ (id)calendarForLabel:(id)a0;
+ (id)initialValueForLabel:(id)a0 group:(id)a1;
+ (id)_dateForGroup:(id)a0;

- (void)updateLabeledValueWithLabel:(id)a0;
- (id)labeledValueToCurateFromSuggestion;
- (id)displayLabel;

@end
