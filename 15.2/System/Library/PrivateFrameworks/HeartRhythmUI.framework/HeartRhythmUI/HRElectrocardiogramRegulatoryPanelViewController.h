@class NSArray;

@interface HRElectrocardiogramRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController {
    NSArray *_displayableItems;
}

@property (nonatomic) long long reenableFeatureSection;

- (void)viewDidLoad;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)_displayableItemsForFeatureName;
- (id)_displayableItemsForPhone;
- (BOOL)_shouldDisplayItemsForWatch;
- (id)_displayableItemsForWatch;
- (id)_displayableItemsForInstructionManual;
- (id)_displayableItemsForReenableFeature;
- (id)_displayableItemsForContactSupport;
- (id)displayableItems;
- (void)receivedHeartRhythmAvailabilityNotification;

@end
