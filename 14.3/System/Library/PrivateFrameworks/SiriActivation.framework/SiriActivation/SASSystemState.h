@class NSHashTable, NSString, NSArray, CXCallObserver, CARSessionStatus, AFNotifyObserver, SASLockStateMonitor, NSMutableSet, CARAutomaticDNDStatus, FBSDisplayLayoutMonitor, SUICApplicationStateHelper;

@interface SASSystemState : NSObject <SASEmptyProtocol, CXCallObserverDelegate, CARSessionObserving>

@property (nonatomic) int carPlayConnectionState;
@property (nonatomic) BOOL accessibilityShortcutEnabled;
@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) NSMutableSet *activeCalls;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor;
@property (retain, nonatomic) NSArray *currentCarPlaySupportedOEMAppIdList;
@property (retain, nonatomic) CARSessionStatus *carPlaySessionStatus;
@property (retain, nonatomic) CARAutomaticDNDStatus *carAutomaticDNDStatus;
@property (retain, nonatomic) NSString *vehicleName;
@property (retain, nonatomic) NSString *vehicleModel;
@property (retain, nonatomic) NSString *vehicleManufacturer;
@property (nonatomic) BOOL rightHandDrive;
@property (retain, nonatomic) SUICApplicationStateHelper *applicationStateHelper;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) AFNotifyObserver *observerWirelessSplitter;
@property (retain, nonatomic) AFNotifyObserver *observerBluetoothGuestConnected;
@property (retain, nonatomic) SASLockStateMonitor *lockStateMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)sharedSystemState;

- (void)sessionDidConnect:(id)a0;
- (BOOL)deviceScreenIsOn;
- (BOOL)isConnectedToTrustedCarPlay;
- (BOOL)deviceIsPasscodeLocked;
- (id)init;
- (BOOL)siriIsRestricted;
- (void)_fetchOEMAppContext;
- (BOOL)isConnectedToCarPlay;
- (id)foregroundAppInfosForPresentationIdentifier:(long long)a0;
- (void).cxx_destruct;
- (id)currentSpokenLanguageCode;
- (BOOL)hasUnlockedSinceBoot;
- (void)_fetchVehicleInformation;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (BOOL)_mapsAppIsVisibleOnLockscreen;
- (void)sessionDidDisconnect:(id)a0;
- (BOOL)carDNDActiveOrEyesFreeAndShouldHaveFullScreenPresentation;
- (BOOL)isPad;
- (BOOL)isWirelessSplitterOn;
- (BOOL)isInActiveCall;
- (BOOL)_deviceIsUnlocked;
- (BOOL)smartCoverClosed;
- (BOOL)carDNDActive;
- (BOOL)_internalAlwaysEyesFreeEnabled;
- (void)_updateCarPlayConnectionState;
- (BOOL)isATV;
- (void)addStateChangeListener:(id)a0;
- (void)monitorLockState;
- (BOOL)isRightHandDrive;
- (BOOL)siriIsEnabled;
- (void)removeStateChangeListener:(id)a0;
- (BOOL)siriIsSupported;
- (void)_pairedVehiclesDidChange:(id)a0;
- (void)monitorCarSessions;
- (void)_updateAccessibilityState;
- (BOOL)deviceIsBlocked;
- (BOOL)isGuestConnected;
- (unsigned long long)carDNDStatus;
- (BOOL)isConnectedToEyesFreeDevice;
- (void)_setCarPlayConnectionState:(int)a0;
- (id)_initForTesting;

@end
