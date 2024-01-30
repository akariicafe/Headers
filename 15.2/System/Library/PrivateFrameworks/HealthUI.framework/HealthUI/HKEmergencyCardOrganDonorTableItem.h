@class HKMedicalIDEditorPickerCell;

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate> {
    HKMedicalIDEditorPickerCell *_editableCell;
    BOOL _isEditing;
}

- (id)title;
- (void).cxx_destruct;
- (void)commitEditing;
- (id)possibleValues;
- (BOOL)hasPresentableData;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (long long)editingStyleForRowAtIndex:(long long)a0;
- (long long)commitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (void)didCommitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (id)_createEditableCell;
- (void)promptOrganDonationRegistrationIfPossibleWithCompletion:(id /* block */)a0;

@end
