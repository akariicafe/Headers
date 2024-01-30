@class _HKEmergencyContact;

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell

@property (retain, nonatomic) _HKEmergencyContact *contact;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)formattedValue;
- (void)_labelTapped:(id)a0;

@end
