@interface HKEmergencyCardMedicalConditionsTableItem : HKEmergencyCardMultilineTextTableItem

- (id)_placeholderText;
- (id)title;
- (BOOL)hasPresentableData;
- (id)_multilineStringValue;
- (void)_updateMultilineStringValueWithValue:(id)a0;

@end
