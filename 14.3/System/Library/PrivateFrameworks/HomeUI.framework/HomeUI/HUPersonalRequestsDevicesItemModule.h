@class HFItem, HMHome, NSArray, NSString, NSSet, HFUserItem, HFItemProvider, HMAssistantAccessControl, HULocationDeviceManager, NAFuture;
@protocol HFMediaProfileContainer;

@interface HUPersonalRequestsDevicesItemModule : HFItemModule <HULocationDeviceManagerObserver>

@property (readonly, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFUserItem *sourceItem;
@property (readonly, nonatomic) HMAssistantAccessControl *accessControl;
@property (retain, nonatomic) HFItemProvider *personalRequestsDevicesProvider;
@property (readonly, nonatomic) HFItem *footerItem;
@property (readonly, nonatomic) HFItem *personalRequestsToggleItem;
@property (nonatomic) BOOL onlyShowDeviceSwitches;
@property (readonly, nonatomic) HULocationDeviceManager *locationDeviceManager;
@property (copy, nonatomic) NSArray *personalRequestsDevices;
@property (retain, nonatomic) id<HFMediaProfileContainer> sourceMediaProfileContainer;
@property (readonly, nonatomic) NAFuture *activeLocationDeviceFuture;
@property (retain, nonatomic) NSArray *supportedMULanguageCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (void)turnOnPersonalRequestsForAllVoiceRecognitionCapablePersonalRequestsDevices;
- (void)_createItemProviders;
- (BOOL)isCurrentIOSDeviceOnSameVoiceRecognitionLanguageAsPersonalRequestsDeviceForItem:(id)a0;
- (BOOL)_showPersonalRequestsItems;
- (void)turnOnAllPersonalRequestsDevices;
- (BOOL)_voiceRecognitionLanguage:(id)a0 matchesMultiUserCapableHomePod:(id)a1;
- (id)_commitUpdateToAccessControl:(id)a0;
- (void)locationDeviceManager:(id)a0 didUpdateActiveLocationDevice:(id)a1;
- (id)initWithItemUpdater:(id)a0 userItem:(id)a1 home:(id)a2 onlyShowDeviceSwitches:(BOOL)a3;
- (BOOL)isItemPersonalRequestsToggle:(id)a0;
- (BOOL)isItemPersonalRequestsDevice:(id)a0;
- (BOOL)isItemPersonalRequestsFooter:(id)a0;
- (void)toggleAllPersonalRequestsDevices;
- (id)updateLocationDeviceToThisDevice;

@end
