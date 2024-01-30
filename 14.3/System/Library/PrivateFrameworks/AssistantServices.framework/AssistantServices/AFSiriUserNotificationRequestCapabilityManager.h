@class NSString, AFSettingsConnection, AFNotifyObserver, AVSystemController, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFSiriUserNotificationRequestCapabilityManager : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate> {
    BOOL _inWirelessSplitterSession;
    BOOL _inWirelessSplitterSessionStateValid;
    BOOL _routeAvailableForSpokenMessages;
    BOOL _lastKnownEligibilityState;
    BOOL _localVoiceAssetAvailable;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_wirelessSplitterSessionObserver;
    AFNotifyObserver *_wirelessGuestConnectionObserver;
    AVSystemController *_avSystemController;
    AFNotifyObserver *_forcedUpdateObserver;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportedByApplicationWithBundleID:(id)a0;
+ (long long)announcementTypeForBundleID:(id)a0;
+ (id)_requiredIntentIdentifiersForAnnouncementType:(long long)a0;
+ (id)_announceableIntentIdentifiersForAnnouncementType:(long long)a0;
+ (BOOL)_isRouteAvailableForAnnouncement:(id)a0;
+ (BOOL)applicationWithBundleID:(id)a0 canAnnounceNotificationWithIntentIdentifiers:(id)a1;
+ (id)sharedManager;

- (void)fetchRequestCanBeHandledStateWithCompletion:(id /* block */)a0;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (BOOL)hasEligibleSetup;
- (void)fetchElligibleSetupStateAndNotifyObservers:(id)a0;
- (void)addObserver:(id)a0;
- (void)_settingsConnectionDidDisconnect;
- (void)updateWirelessSplitterSessionInfoAndObserve;
- (id)_init;
- (void)fetchEligibleSetupStateWithCompletion:(id /* block */)a0;
- (BOOL)requestCanBeHandled;
- (void)fetchInitialState;
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(id /* block */)a0;
- (id)_settingsConnection;
- (void)notifyObserversOfCurrentRequestCanBeHandledState;
- (void)fetchWirelessSplitterSessionInfoAndStartObservingSync;
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(id /* block */)a0;
- (void)updateAudioRouteAvailabilityForSpokenMessages:(id)a0;
- (BOOL)_updateAudioRouteAvailabilityForSpokenMessagesAndBroadcast:(BOOL)a0;
- (void)systemControllerDied:(id)a0;
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(id /* block */)a0;
- (void)notifyObserversOfCurrentEligibleSetupState:(BOOL)a0;

@end
