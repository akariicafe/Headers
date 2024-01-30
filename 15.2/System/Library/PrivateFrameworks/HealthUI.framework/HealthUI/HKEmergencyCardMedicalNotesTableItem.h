@interface HKEmergencyCardMedicalNotesTableItem : HKEmergencyCardMultilineTextTableItem

- (id)title;
- (id)_placeholderText;
- (BOOL)hasPresentableData;
- (id)_multilineStringValue;
- (void)_updateMultilineStringValueWithValue:(id)a0;

@end
