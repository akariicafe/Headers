@class NSDictionary, UISwitch, UITextField;
@protocol PXDiagnosticsHighlightCurationSettingsViewControllerDelegate;

@interface PXDiagnosticsHighlightCurationSettingsViewController : UIViewController {
    id<PXDiagnosticsHighlightCurationSettingsViewControllerDelegate> _delegate;
    UISwitch *_doIdenticalDedupingSwitch;
    UITextField *_identicalDedupingTimeIntervalTextField;
    UITextField *_identicalDedupingTimeIntervalForPeopleTextField;
    UITextField *_identicalDedupingMaximumTimeGroupExtensionTextField;
    UITextField *_maximumNumberOfItemsPerIdenticalClusterTextField;
    UITextField *_identicalDedupingThresholdTextField;
    UITextField *_identicalDedupingThresholdForPeopleTextField;
    UITextField *_identicalDedupingThresholdForBestItemsTextField;
    UISwitch *_useFaceprintsForIdenticalDedupingSwitch;
    UITextField *_identicalDedupingFaceprintDistanceTextField;
    UISwitch *_doSemanticalDedupingSwitch;
    UITextField *_semanticalDedupingTimeIntervalTextField;
    UITextField *_semanticalDedupingTimeIntervalForPeopleTextField;
    UITextField *_semanticalDedupingTimeIntervalForPersonsTextField;
    UITextField *_semanticalDedupingMaximumTimeGroupExtensionTextField;
    UITextField *_maximumNumberOfItemsPerSemanticalClusterTextField;
    UITextField *_semanticalDedupingThresholdTextField;
    UITextField *_semanticalDedupingThresholdForPeopleTextField;
    UITextField *_semanticalDedupingThresholdForPersonsTextField;
    UISwitch *_doNotSemanticallyDedupePeopleSwitch;
    UISwitch *_doNotSemanticallyDedupePersonsSwitch;
    UISwitch *_allowAdaptiveForSemanticalDedupingSwitch;
    UISwitch *_useOnlyScenesForDedupingSwitch;
    UISwitch *_useAllPersonsForDedupingSwitch;
    UISwitch *_useFaceQualityForElectionSwitch;
    UISwitch *_doNotDedupeVideosSwitch;
    UISwitch *_doNotDedupeInterestingPortraitsAndLivePicturesSwitch;
    UISwitch *_onlyDedupeContiguousItemsSwitch;
    UISwitch *_doDejunkSwitch;
    UISwitch *_returnDedupedJunkIfOnlyJunkSwitch;
    UISwitch *_doFinalPassSwitch;
    UITextField *_finalPassTimeIntervalTextField;
    UITextField *_finalPassMaximumTimeGroupExtensionTextField;
    UITextField *_finalPassDedupingThresholdTextField;
}

@property (retain, nonatomic) NSDictionary *options;

- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)_done:(id)a0;
- (void)loadView;
- (void)_resetSettings:(id)a0;
- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (void)_applySettingsGlobally:(id)a0;

@end
