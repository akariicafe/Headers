@class VMVoicemailManager, NSString, ACCCommunicationsCenter, CHManager, NSObject, RadiosPreferences;
@protocol OS_dispatch_queue;

@interface ACCCommunicationsFeaturePlugin : NSObject <ACCCommunicationsCenterCallStateDelegate, ACCCommunicationsCenterCommunicationsDelegate, ACCCommunicationsCenterCallControlsDelegate, ACCCommunicationsCenterListUpdatesDelegate, RadiosPreferencesDelegate, ACCFeaturePluginProtocol>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) ACCCommunicationsCenter *commCenter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) VMVoicemailManager *vmManager;
@property (retain, nonatomic) RadiosPreferences *radiosPreferences;
@property (retain, nonatomic) CHManager *chManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pluginName;

- (BOOL)isAirplaneModeEnabled;
- (id)currentAudioAndVideoCalls;
- (BOOL)swapCalls;
- (unsigned long long)currentCallCount;
- (id)currentLocalizedCarrierName;
- (void)callStateDidChangeForCall:(id)a0;
- (void)stopPlugin;
- (void)initPlugin;
- (void)startPlugin;
- (BOOL)isFaceTimeVideoEnabled;
- (BOOL)updateMuteStatus:(BOOL)a0;
- (id)currentRecentsListWithCoalescing:(BOOL)a0 limit:(unsigned long long)a1;
- (BOOL)isFaceTimeAudioEnabled;
- (void)favoritesListDidChangeNotification:(id)a0;
- (BOOL)initiateCallToVoicemail;
- (BOOL)endCallWithAction:(int)a0 callUUID:(id)a1;
- (BOOL)updateHoldStatus:(BOOL)a0 forCallWithUUID:(id)a1;
- (BOOL)isTelephonyEnabled;
- (unsigned long long)currentUnreadVoicemailCount;
- (BOOL)sendDTMF:(int)a0 forCallWithUUID:(id)a1;
- (int)currentRegistrationStatus;
- (BOOL)isCellularSupported;
- (BOOL)initiateCallToDestination:(id)a0 withService:(int)a1 addressBookID:(id)a2;
- (void).cxx_destruct;
- (BOOL)isHoldAvailable;
- (void)removeNotificationObservers;
- (BOOL)endAllCalls;
- (void)callStateDidChangeNotification:(id)a0;
- (BOOL)mergeCalls;
- (int)currentSignalStrength;
- (void)airplaneModeChanged;
- (BOOL)currentMuteStatus;
- (id)currentFavoritesListWithLimit:(unsigned long long)a0;
- (id)currentCallStates;
- (void)addNotificationObservers;
- (BOOL)isHoldAndAcceptAvailable;
- (id)currentCarrierName;
- (BOOL)initiateRedial;
- (void)commStatusDidChangeNotification:(id)a0;
- (void)recentsListDidChangeNotification:(id)a0;
- (BOOL)isSwapAvailable;
- (BOOL)isEndAndAcceptAvailable;
- (BOOL)isInitiateCallAllowed;
- (BOOL)acceptCallWithAction:(int)a0 callUUID:(id)a1;
- (id)currentCommunicationsStatus;
- (BOOL)isMergeAvailable;

@end
