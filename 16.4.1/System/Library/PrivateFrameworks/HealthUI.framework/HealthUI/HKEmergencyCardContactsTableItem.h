@class HKMedicalIDEmergencyContactFlow, UITableViewCell, _HKEmergencyContact;
@protocol HKEmergencyCardContactUpdateDelegate;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEmergencyContactFlowDelegate, HKEmergencyContactRelationshipPickerDelegate> {
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    HKMedicalIDEmergencyContactFlow *_contactPicker;
}

@property (weak, nonatomic) id<HKEmergencyCardContactUpdateDelegate> delegate;

- (long long)numberOfRows;
- (id)title;
- (void).cxx_destruct;
- (id)initInEditMode:(BOOL)a0;
- (id)titleForHeader;
- (id)titleForFooter;
- (void)medicalIDEditorCellDidTapLabel:(id)a0;
- (void)_addEmergencyContactToData:(id)a0;
- (id)_dequeueAndConfigureContactEditCellForIndex:(long long)a0 inTableView:(id)a1;
- (id)_dequeueAndConfigureContactViewCellForIndex:(long long)a0 inTableView:(id)a1;
- (id)_footerAttributedText;
- (id)_footerAttributedTextForPrimaryProfile;
- (id)_footerAttributedTextForSecondaryProfile;
- (id)_footerTextForSecondaryProfile;
- (id)_footerTextWithGivenName:(id)a0;
- (void)_presentEmergencyContactPickerIfPossible;
- (void)_setupContactPickingFlow;
- (void)callEmergencyContact:(id)a0;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (long long)commitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (long long)contactIndexForRowIndex:(long long)a0;
- (long long)editingStyleForRowAtIndex:(long long)a0;
- (void)emergencyContactFlow:(id)a0 didSelectContact:(id)a1;
- (void)emergencyContactFlowDidCancel:(id)a0;
- (void)emergencyContactRelationshipPicker:(id)a0 didChooseRelationshipNamed:(id)a1;
- (void)emergencyContactRelationshipPickerDidCancel:(id)a0;
- (BOOL)hasPresentableData;
- (long long)itemTypeForRowIndex:(long long)a0;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (BOOL)refreshFromData:(BOOL)a0;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;
- (id)viewOnlyTitle;

@end
