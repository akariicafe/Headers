@class HUFirmwareUpdateItemProvider, HFResidentDeviceStatusDetailsItemProvider, HUSoftwareUpdateInfoItemProvider, HFNoRemoteAccessStatusDetailsItem, NSMutableSet, NSArray, NSMutableDictionary;

@interface HUHomeStatusDetailsItemManager : HFItemManager

@property (retain, nonatomic) HFResidentDeviceStatusDetailsItemProvider *residentDeviceStatusItemProvider;
@property (retain, nonatomic) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider;
@property (retain, nonatomic) HUSoftwareUpdateInfoItemProvider *softwareUpdateItemProvider;
@property (retain, nonatomic) HFNoRemoteAccessStatusDetailsItem *noRemoteAccessItem;
@property (retain, nonatomic) NSMutableSet *representedHomeKitObjects;
@property (retain, nonatomic) NSArray *cachedSectionIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *cachedRoomNamesByIdentifier;
@property (retain, nonatomic) NSMutableSet *minimumPriorityItemTuples;

- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)_identifierForSection:(unsigned long long)a0;
- (id /* block */)_sectionComparator;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (BOOL)shouldHideItem:(id)a0;
- (void)maintainMinimumPriorityForItem:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (long long)_effectivePriorityForItem:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)_minimumPriorityNumberForItem:(id)a0;
- (id)_roomForItem:(id)a0;
- (id)_separateSectionIdentifierForItem:(id)a0;
- (BOOL)_shouldHideHomeKitObject:(id)a0;
- (BOOL)_shouldUseSeparateSectionForItem:(id)a0;
- (BOOL)_shouldUseSoftwareUpdateSectionForItem:(id)a0;
- (void)_willUpdateSections;
- (id)currentSectionIdentifiersSnapshot;
- (BOOL)hasSymptomsHandlerForMediaProfileContainer:(id)a0;
- (BOOL)isDisplayingRoomLevelStatus;
- (BOOL)isFirmwareUpdateStatusItem;
- (BOOL)isLowBatteryStatusItem;
- (BOOL)isNoResponseStatusItem;
- (BOOL)isResidentDeviceStatusItem;
- (id)matchingItemForHomeKitObject:(id)a0;
- (void)resetItemPrioritiesToDefaults;
- (BOOL)shouldReloadItemProvidersOnSourceItemChange;
- (BOOL)shouldShowAccessoryTiles;
- (BOOL)shouldShowRoomNameForItem:(id)a0;
- (BOOL)shouldShowServiceGroupTiles;
- (BOOL)shouldUseTitleDescriptionStyleForItem:(id)a0;
- (id)statusItem;

@end
