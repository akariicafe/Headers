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
@property (nonatomic) unsigned long long carPlayEnhancedSiriCharacteristics;
@property (nonatomic) long long carPlayEnhancedVoiceTriggerMode;
@property (retain, nonatomic) SASLockStateMonitor *lockStateMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)sharedSystemState;

- (void)callObserver:(id)a0 callChanged:(id)a1;
- (BOOL)hasUnlockedSinceBoot;
- (void)sessionDidDisconnect:(id)a0;
- (void)sessionDidConnect:(id)a0;
- (BOOL)isConnectedToEyesFreeDevice;
- (BOOL)isPad;
- (id)_initForTesting;
- (void)addStateChangeListener:(id)a0;
- (BOOL)isWirelessSplitterOn;
- (void)_setCarPlayConnectionState:(int)a0;
- (BOOL)_mapsAppIsVisibleOnLockscreen;
- (void)_updateCarPlayConnectionState;
- (void)_pairedVehiclesDidChange:(id)a0;
- (BOOL)deviceIsPasscodeLocked;
- (void)_fetchVehicleInformation;
- (BOOL)carDNDActive;
- (BOOL)smartCoverClosed;
- (void)_updateAccessibilityState;
- (BOOL)isRightHandDrive;
- (BOOL)carPlaySupportsAnyEnhancedSiriCharacteristics;
- (BOOL)hasIncomingCall;
- (void)_fetchOEMAppContext;
- (BOOL)isConnectedToTrustedCarPlay;
- (BOOL)siriIsSupported;
- (BOOL)_deviceIsUnlocked;
- (BOOL)deviceScreenIsOn;
- (BOOL)isATV;
- (void).cxx_destruct;
- (BOOL)_internalAlwaysEyesFreeEnabled;
- (BOOL)siriIsRestricted;
- (id)init;
- (void)monitorLockState;
- (BOOL)isConnectedToCarPlay;
- (BOOL)siriIsEnabled;
- (BOOL)isGuestConnected;
- (BOOL)carDNDActiveOrEyesFreeAndShouldHaveFullScreenPresentation;
- (id)currentSpokenLanguageCode;
- (BOOL)deviceIsBlocked;
- (long long)_enhancedVoiceTriggerModeFromConfiguration:(id)a0;
- (id)foregroundAppInfosForPresentationIdentifier:(long long)a0;
- (BOOL)carPlaySupportsEnhancedSiriCharacteristic:(unsigned long long)a0;
- (unsigned long long)carDNDStatus;
- (BOOL)isInActiveCall;
- (void)monitorCarSessions;
- (void)removeStateChangeListener:(id)a0;

@end
