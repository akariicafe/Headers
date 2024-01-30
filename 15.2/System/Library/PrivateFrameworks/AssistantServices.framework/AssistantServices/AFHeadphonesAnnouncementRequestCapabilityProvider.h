@class NSHashTable, NSString, AFSettingsConnection, AFNotifyObserver, AVSystemController, AFHeadphonesAnnouncementRoute, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFHeadphonesAnnouncementRequestCapabilityProvider : NSObject <AFNotifyObserverDelegate, AFSettingsDelegate, AFAnnouncementRequestCapabilityProviding> {
    BOOL _inWirelessSplitterSession;
    BOOL _inWirelessSplitterSessionStateValid;
    BOOL _localVoiceAssetAvailable;
    AFSettingsConnection *_settingsConnection;
    AFNotifyObserver *_pairedInfoChangeObserver;
    AFNotifyObserver *_wirelessSplitterSessionObserver;
    AFNotifyObserver *_wirelessGuestConnectionObserver;
    AVSystemController *_avSystemController;
    AFNotifyObserver *_forcedUpdateObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    unsigned long long _lastKnownAvailableAnnouncementRequests;
    unsigned long long _lastKnownEligibleAnnouncementRequests;
    NSHashTable *_delegates;
}

@property (retain, nonatomic) AFHeadphonesAnnouncementRoute *currentlyRoutedHeadphonesRoute;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)announceableIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;
+ (id)provider;
+ (long long)platform;
+ (id)requiredIntentIdentifiersForUserNotificationAnnouncementType:(long long)a0;

- (void)addDelegate:(id)a0;
- (BOOL)_updateAudioRouteAvailabilityAndBroadcast:(BOOL)a0;
- (void)updateAudioRouteAvailability:(id)a0;
- (id)_getCurrentHeadphonesAnnouncementRoute;
- (void)notifyObserversOfEligibleAnnouncementRequestTypes:(unsigned long long)a0;
- (void)_fetchPairedBluetoothDevicesFromSourceWithCompletion:(id /* block */)a0;
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(id /* block */)a0;
- (void)fetchLocalVoiceAssetAvailabilityWithCompletion:(id /* block */)a0;
- (void)fetchAvailableAnnouncementRequestTypesWithCompletion:(id /* block */)a0;
- (void)_fetchInitialState;
- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)updateWirelessSplitterSessionInfoAndObserve;
- (id)currentlyRoutedHeadphonesBTAddress;
- (unsigned long long)_routeCapabilitiesForRouteDescription:(id)a0;
- (void)notifyObserversOfAvailableAnnouncementRequestTypes;
- (id)currentlyRoutedHeadphonesProductID;
- (void)notifyObserver:(id)a0 didReceiveNotificationWithToken:(int)a1;
- (void)_fetchEligibleAnnouncementRequestTypesAndNotifyObservers;
- (void)fetchWirelessSplitterSessionInfoAndStartObservingSync;
- (void).cxx_destruct;
- (void)_settingsConnectionDidDisconnect;
- (void)systemControllerDied:(id)a0;
- (id)_init;
- (id)_settingsConnection;
- (unsigned long long)lastKnownEligibleAnnouncementRequestTypes;
- (void)fetchEligibleAnnouncementRequestTypesAndNotifyObservers:(id)a0;
- (void)fetchEligibleAnnouncementRequestTypesWithCompletion:(id /* block */)a0;

@end
