@class UITableViewCell, HKCoreTelephonyUtilities, _HKEmergencyContact, HKEmergencyContactPicker;
@protocol HKEmergencyCardContactUpdateDelegate;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKEmergencyContactPickerDelegate, HKEmergencyContactRelationshipPickerDelegate> {
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    HKEmergencyContactPicker *_contactPicker;
    BOOL _selectedContactIsBeingAdded;
}

@property (retain, nonatomic) HKCoreTelephonyUtilities *coreTelephonyUtilities;
@property (weak, nonatomic) id<HKEmergencyCardContactUpdateDelegate> delegate;

- (long long)numberOfRows;
- (void).cxx_destruct;
- (id)initInEditMode:(BOOL)a0;
- (id)title;
- (id)titleForHeader;
- (id)titleForFooter;
- (BOOL)hasPresentableData;
- (void)medicalIDEditorCellDidChangeValue:(id)a0;
- (void)medicalIDEditorCellDidTapLabel:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndex:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndex:(long long)a1;
- (BOOL)shouldHighlightRowAtIndex:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndex:(long long)a1;
- (BOOL)canEditRowAtIndex:(long long)a0;
- (long long)editingStyleForRowAtIndex:(long long)a0;
- (long long)commitEditingStyle:(long long)a0 forRowAtIndex:(long long)a1;
- (long long)itemTypeForRowIndex:(long long)a0;
- (id)_footerAttributedText;
- (long long)contactIndexForRowIndex:(long long)a0;
- (id)_footerAttributedTextForSecondaryProfile;
- (id)_footerAttributedTextForPrimaryProfile;
- (id)_footerTextForSecondaryProfile;
- (id)_footerTextWithGivenName:(id)a0;
- (id)_dequeueAndConfigureContactEditCellForIndex:(long long)a0 inTableView:(id)a1;
- (id)_dequeueAndConfigureContactViewCellForIndex:(long long)a0 inTableView:(id)a1;
- (void)callEmergencyContact:(id)a0;
- (void)_presentEmergencyContactPicker;
- (void)_addEmergencyContactToData:(id)a0;
- (void)_didSelectContact:(id)a0 property:(id)a1;
- (void)emergencyContactPicker:(id)a0 didSelectContact:(id)a1;
- (void)emergencyContactPicker:(id)a0 didSelectContactProperty:(id)a1;
- (void)emergencyContactRelationshipPicker:(id)a0 didChooseRelationshipNamed:(id)a1;
- (void)emergencyContactRelationshipPickerDidCancel:(id)a0;
- (BOOL)refreshFromData:(BOOL)a0;
- (id)viewOnlyTitle;

@end
