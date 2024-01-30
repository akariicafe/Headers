@class NSString, FIUIHealthSettingsHeightPickerController, FIUIHealthSettingsWheelchairUsePickerController, FIUIHealthSettingsWeightPickerController, FIActivitySettingsController, FIUIHealthSettingsTableViewCell, FIUIHealthSettingsBirthDatePickerController, FIUIHealthSettingsSexPickerController;

@interface FIUIHealthSettingsDataSource : NSObject <UITableViewDataSource> {
    FIUIHealthSettingsTableViewCell *_birthDateCell;
    FIUIHealthSettingsTableViewCell *_biologicalSexCell;
    FIUIHealthSettingsTableViewCell *_heightCell;
    FIUIHealthSettingsTableViewCell *_weightCell;
    FIUIHealthSettingsTableViewCell *_wheelchairUseCell;
    FIActivitySettingsController *_preEditSettingsController;
    BOOL _showWheelchair;
}

@property (retain, nonatomic) FIActivitySettingsController *settingsController;
@property (retain, nonatomic) FIUIHealthSettingsBirthDatePickerController *birthDatePickerController;
@property (retain, nonatomic) FIUIHealthSettingsHeightPickerController *heightPickerController;
@property (retain, nonatomic) FIUIHealthSettingsWeightPickerController *weightPickerController;
@property (retain, nonatomic) FIUIHealthSettingsSexPickerController *sexPickerController;
@property (retain, nonatomic) FIUIHealthSettingsWheelchairUsePickerController *wheelchairUsePickerController;
@property (readonly, nonatomic) FIActivitySettingsController *editedSettingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)startEditing;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_updateCells;
- (void)_updateBirthDateCell;
- (void)_updateBiologicalSexCell;
- (void)_updateHeightCell;
- (void)_updateWeightCell;
- (void)_updateWheelchairUseCell;
- (id)birthDateCell;
- (id)biologicalSexCell;
- (id)heightCell;
- (id)weightCell;
- (id)wheelchairUseCell;
- (id)initWithActivitySettingsController:(id)a0 showWheelchair:(BOOL)a1;
- (void)cellDidBecomeFirstResponder:(id)a0;
- (void)cellDidResignFirstResponder:(id)a0;
- (void)endEditingAndDiscardChanges:(BOOL)a0;

@end
