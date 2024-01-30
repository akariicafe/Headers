@class _HKEmergencyContact;

@interface HKMedicalIDEditorEmergencyContactCell : HKMedicalIDEditorCell

@property (retain, nonatomic) _HKEmergencyContact *contact;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)formattedValue;
- (void).cxx_destruct;
- (void)_labelTapped:(id)a0;

@end
