@class PSTextFieldSpecifier, PSSpecifier;

@interface AUDeveloperSettingsLocationListController : PSListController {
    PSSpecifier *_locationRadioGroup;
    PSSpecifier *_livabilitySpecifier;
    PSSpecifier *_internalSeedSpecifier;
    PSSpecifier *_customerSpecifier;
    PSSpecifier *_publicSeedSpecifier;
    PSSpecifier *_basejumperSpecifier;
    PSSpecifier *_basejumperRadioGroup;
    PSSpecifier *_latestBasejumperSpecifier;
    PSSpecifier *_customBasejumperSpecifier;
    PSSpecifier *_customBasejumperBuildGroup;
    PSTextFieldSpecifier *_customTrainSpecifier;
    PSTextFieldSpecifier *_customBuildSpecifier;
    BOOL _showingCustomBasejumperBuildSpecifiers;
    BOOL _showingBasejumperSpecifiers;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)trainName;
- (void)setTrainName:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setBuildName:(id)a0;
- (id)buildName;
- (void)showBasejumperSpecifiers:(BOOL)a0 animated:(BOOL)a1;
- (void)showCustomBasejumperBuildSpecifiers:(BOOL)a0 animated:(BOOL)a1;

@end
