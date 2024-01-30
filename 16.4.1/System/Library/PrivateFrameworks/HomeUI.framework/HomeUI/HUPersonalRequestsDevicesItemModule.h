@class HFItem, HMHome, NSArray, NSString, NSSet, HFUserItem, HFItemProvider, HMAssistantAccessControl, HULocationDeviceManager, NSMapTable, NAFuture;
@protocol HFMediaProfileContainer;

@interface HUPersonalRequestsDevicesItemModule : HFItemModule <HULocationDeviceManagerObserver, HFSiriLanguageOptionsManagerObserver>

@property (readonly, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) HFUserItem *sourceItem;
@property (readonly, nonatomic) HMAssistantAccessControl *accessControl;
@property (retain, nonatomic) HFItemProvider *personalRequestsMediaAccessoriesProvider;
@property (retain, nonatomic) HFItemProvider *personalRequestsOtherAccessoriesProvider;
@property (readonly, nonatomic) HFItem *footerItem;
@property (readonly, nonatomic) HFItem *personalRequestsToggleItem;
@property (nonatomic) BOOL onlyShowDeviceSwitches;
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager;
@property (retain, nonatomic) NSMapTable *mediaProfileToLanguageOptionsManagerMap;
@property (copy, nonatomic) NSArray *personalRequestsDevices;
@property (retain, nonatomic) id<HFMediaProfileContainer> sourceMediaProfileContainer;
@property (readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
@property (retain, nonatomic) NSArray *supportedMULanguageCodes;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_commitUpdateToAccessControl:(id)a0;
- (void)_createItemProviders;
- (id)_createPersonalRequestProviderForMediaAcccessories;
- (id)_createPersonalRequestProviderForOtherAcccessories;
- (BOOL)_showPersonalRequestsItems;
- (id)_transformItemForSourceItem:(id)a0;
- (BOOL)_voiceRecognitionLanguage:(id)a0 matchesMultiUserCapableAccessory:(id)a1;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 userItem:(id)a1 home:(id)a2 onlyShowDeviceSwitches:(BOOL)a3;
- (id)initWithItemUpdater:(id)a0 userItem:(id)a1 home:(id)a2 settingsController:(id)a3 onlyShowDeviceSwitches:(BOOL)a4;
- (BOOL)isCurrentIOSDeviceOnSameVoiceRecognitionLanguageAsPersonalRequestsDeviceForItem:(id)a0;
- (BOOL)isItemPersonalRequestsDevice:(id)a0;
- (BOOL)isItemPersonalRequestsFooter:(id)a0;
- (BOOL)isItemPersonalRequestsToggle:(id)a0;
- (void)locationDeviceManager:(id)a0 didUpdateActiveLocationDevice:(id)a1;
- (id)recognitionLanguageForItem:(id)a0;
- (BOOL)recognitionLanguageIsSupportedVRLanguageForCurrentDevice;
- (BOOL)recognitionLanguageIsSupportedVRLanguageForItem:(id)a0;
- (void)registerForExternalUpdates;
- (void)siriLanguageOptionsManager:(id)a0 availableLanguageOptionsDidChange:(id)a1;
- (void)siriLanguageOptionsManager:(id)a0 selectedLanguageOptionDidChange:(id)a1;
- (void)toggleAllPersonalRequestsDevices;
- (void)turnOnAllPersonalRequestsDevices;
- (void)turnOnPersonalRequestsForAllVoiceRecognitionCapablePersonalRequestsDevices;
- (void)unregisterForExternalUpdates;
- (id)updateLocationDeviceToThisDevice;

@end
