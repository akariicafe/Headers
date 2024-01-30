@class HKPairedFeatureAttributes, NSString, NSArray, HKFeatureStatusManager, HKFeatureAvailabilityStore;

@interface HRElectrocardiogramRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController <HKFeatureStatusProvidingObserver> {
    NSArray *_displayableItems;
    HKFeatureAvailabilityStore *_featureAvailabilityStore;
    HKFeatureStatusManager *_featureStatusManager;
    HKPairedFeatureAttributes *_pairedFeatureAttributes;
    BOOL _isElectrocardiogramRecordingOnboarded;
    BOOL _isElectrocardiogramRecordingRemoteDisabled;
}

@property (nonatomic) long long reenableFeatureSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)featureStatusProviding:(id)a0 didUpdateFeatureStatus:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithHealthStore:(id)a0 delegate:(id)a1;
- (id)_displayableItemsForFeatureName;
- (id)_displayableItemsForContactSupport;
- (id)_displayableItemsForInstructionManual;
- (id)_displayableItemsForPhone;
- (id)_displayableItemsForReenableFeature;
- (id)_displayableItemsForWatch;
- (BOOL)_shouldDisplayItemsForWatch;
- (id)displayableItems;
- (void)updateElectrocardiogramStatusWithFeatureStatus:(id)a0;

@end
