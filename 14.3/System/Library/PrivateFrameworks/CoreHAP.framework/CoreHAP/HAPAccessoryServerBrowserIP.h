@class HMFTimer, NSString, NSArray, NSMutableSet, HAPWACAccessoryBrowser, NSObject, HAPPowerManager;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserDelegate;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HMFTimerDelegate, HAPPowerManagerProtocol, HAPWACAccessoryBrowserDelegate, HAPAccessoryServerNotification> {
    struct BonjourBrowser { } *_bonjourBrowser;
}

@property (retain, nonatomic) NSMutableSet *discoveredAccessoryServers;
@property (weak, nonatomic) id<HAPAccessoryServerBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSMutableSet *pendingBonjourEvents;
@property (retain, nonatomic) HMFTimer *bonjourEventTimer;
@property (retain, nonatomic) HAPWACAccessoryBrowser *hapWACBrowser;
@property (retain, nonatomic) HAPPowerManager *powerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

- (long long)linkType;
- (void)stopDiscoveringAccessoryServers;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)wacBrowser:(id)a0 didRemoveHAPWACAccessory:(id)a1;
- (int)_initializeAndStartBonjourBrowser;
- (id)initWithQueue:(id)a0;
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)a0;
- (void)_invalidateWACServers;
- (void)wacBrowser:(id)a0 didFindHAPWACAccessory:(id)a1;
- (void).cxx_destruct;
- (void)unitTest_handleBonjourBrowserEvent:(unsigned int)a0 eventInfo:(id)a1;
- (void)devicePowerStateChanged:(unsigned long long)a0;
- (void)processPendingBonjourRemoveEvents:(id)a0;
- (void)_matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)startDiscoveringAccessoryServers;
- (id)wacBrowser;
- (int)_server:(id *)a0 forBonjourDevice:(id)a1;
- (void)notifyDelegatesOfWACCompletionWithIdentifier:(id)a0 error:(id)a1;
- (void)_pendBonjourEvent:(id)a0;
- (void)timerDidFire:(id)a0;
- (id)visible2Pt4Networks;
- (void)startDiscoveringWACAccessoryServerWithIdentifier:(id)a0;
- (void)_handleBonjourRemoveWithEventInfo:(id)a0;
- (id)serverWithIdentifier:(id)a0;
- (void)startDiscoveringWACAccessoryServers;
- (void)stopDiscoveringWACAccessoryServersWithInvalidation:(BOOL)a0;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)_invalidateAccessoryServers:(BOOL)a0;
- (void)_server:(id *)a0 forHAPWACAccessory:(id)a1;
- (void)_invalidateAndRemoveAccessoryServer:(id)a0;
- (int)_purgePendingBonjourEvents:(id)a0 withProcessing:(BOOL)a1;
- (void)_handleBonjourBrowserEvent:(unsigned int)a0 eventInfo:(id)a1;
- (int)_processPendingBonjourEvent:(id)a0;
- (void)wacBrowser:(id)a0 didFindUnconfiguredPairedHAPWACAccessory:(id)a1;
- (void)_setReachability:(BOOL)a0 forServer:(id)a1;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)_doReachabilityUpdateForServer:(id)a0 withDictionary:(id)a1;
- (void)_pendBonjourRemoveEvent:(id)a0;
- (void)_timerDidExpire:(id)a0;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)a0;
- (void)indicateNotificationFromServer:(id)a0 notifyType:(unsigned long long)a1 withDictionary:(id)a2;

@end
