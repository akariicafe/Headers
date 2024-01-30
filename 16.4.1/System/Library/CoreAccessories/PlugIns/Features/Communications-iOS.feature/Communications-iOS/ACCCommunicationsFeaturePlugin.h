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

- (BOOL)swapCalls;
- (unsigned long long)currentCallCount;
- (void)removeNotificationObservers;
- (id)currentAudioAndVideoCalls;
- (void)initPlugin;
- (BOOL)isAirplaneModeEnabled;
- (BOOL)endCallWithAction:(int)a0 callUUID:(id)a1;
- (void)airplaneModeChanged;
- (void)startPlugin;
- (void)callStateDidChangeForCall:(id)a0;
- (void)callStateDidChangeNotification:(id)a0;
- (BOOL)initiateCallToVoicemail;
- (BOOL)isHoldAvailable;
- (unsigned long long)currentUnreadVoicemailCount;
- (BOOL)isInitiateCallAllowed;
- (id)currentCommunicationsStatus;
- (void)commStatusDidChangeNotification:(id)a0;
- (void)addNotificationObservers;
- (id)currentCarrierName;
- (BOOL)endAllCalls;
- (BOOL)isCellularSupported;
- (id)currentLocalizedCarrierName;
- (int)currentSignalStrength;
- (void)recentsListDidChangeNotification:(id)a0;
- (int)currentRegistrationStatus;
- (BOOL)isEndAndAcceptAvailable;
- (id)currentFavoritesListWithLimit:(unsigned long long)a0;
- (BOOL)isSwapAvailable;
- (BOOL)isFaceTimeAudioEnabled;
- (BOOL)updateHoldStatus:(BOOL)a0 forCallWithUUID:(id)a1;
- (BOOL)isMergeAvailable;
- (BOOL)sendDTMF:(int)a0 forCallWithUUID:(id)a1;
- (BOOL)currentMuteStatus;
- (id)currentRecentsListWithCoalescing:(BOOL)a0 limit:(unsigned long long)a1;
- (BOOL)initiateCallToDestination:(id)a0 withService:(int)a1 addressBookID:(id)a2;
- (void)favoritesListDidChangeNotification:(id)a0;
- (BOOL)initiateRedial;
- (BOOL)isHoldAndAcceptAvailable;
- (void)stopPlugin;
- (BOOL)isFaceTimeVideoEnabled;
- (id)currentCallStates;
- (void).cxx_destruct;
- (BOOL)isTelephonyEnabled;
- (BOOL)mergeCalls;
- (BOOL)acceptCallWithAction:(int)a0 callUUID:(id)a1;
- (BOOL)updateMuteStatus:(BOOL)a0;

@end
