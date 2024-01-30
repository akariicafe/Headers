@class HFNoRemoteAccessStatusDetailsItem, HUFirmwareUpdateItemProvider, NSArray, HFResidentDeviceStatusDetailsItemProvider, HUSoftwareUpdateActionAndProgressItem, NSMutableDictionary, HUSoftwareUpdateInfoItemProvider, NSMutableSet, HFStaticItem;

@interface HUHomeStatusDetailsItemManager : HFItemManager

@property (retain, nonatomic) HFResidentDeviceStatusDetailsItemProvider *residentDeviceStatusItemProvider;
@property (retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider;
@property (retain, nonatomic) HUSoftwareUpdateInfoItemProvider *softwareUpdateItemProvider;
@property (retain, nonatomic) HFNoRemoteAccessStatusDetailsItem *noRemoteAccessItem;
@property (retain, nonatomic) HUSoftwareUpdateActionAndProgressItem *softwareUpdateActionAndProgressItem;
@property (retain, nonatomic) NSMutableSet *representedHomeKitObjects;
@property (retain, nonatomic) NSArray *cachedSectionIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *cachedRoomNamesByIdentifier;
@property (retain, nonatomic) NSMutableSet *minimumPriorityItemTuples;
@property (retain, nonatomic) HFStaticItem *learnMoreItem;

- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_sectionComparator;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (void)_willUpdateSections;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)matchingItemForHomeKitObject:(id)a0;
- (id)_roomForItem:(id)a0;
- (void)resetItemPrioritiesToDefaults;
- (BOOL)shouldUseTitleDescriptionStyleForItem:(id)a0;
- (BOOL)shouldShowRoomNameForItem:(id)a0;
- (void)maintainMinimumPriorityForItem:(id)a0;
- (long long)_effectivePriorityForItem:(id)a0;
- (id)statusItem;
- (BOOL)shouldReloadItemProvidersOnSourceItemChange;
- (BOOL)_shouldHideHomeKitObject:(id)a0;
- (BOOL)isResidentDeviceStatusItem;
- (BOOL)isNoResponseStatusItem;
- (BOOL)isLowBatteryStatusItem;
- (BOOL)_shouldUseSeparateSectionForItem:(id)a0;
- (BOOL)isDisplayingRoomLevelStatus;
- (id)_separateSectionIdentifierForItem:(id)a0;
- (BOOL)_shouldUseSoftwareUpdateSectionForItem:(id)a0;
- (BOOL)_shouldUseLowBatterySectionForItem:(id)a0;
- (BOOL)shouldHideItem:(id)a0;
- (BOOL)isFirmwareUpdateStatusItem;
- (BOOL)shouldShowAccessoryTiles;
- (BOOL)shouldShowServiceGroupTiles;
- (id)_minimumPriorityNumberForItem:(id)a0;

@end
