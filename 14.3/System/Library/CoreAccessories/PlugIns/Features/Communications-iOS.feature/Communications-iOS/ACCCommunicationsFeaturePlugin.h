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

- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (BOOL)swapCalls;
- (id)currentAudioAndVideoCalls;
- (unsigned long long)currentCallCount;
- (void)recentsListDidChangeNotification:(id)a0;
- (BOOL)updateHoldStatus:(BOOL)a0 forCallWithUUID:(id)a1;
- (BOOL)initiateRedial;
- (id)currentCarrierName;
- (int)currentSignalStrength;
- (BOOL)isTelephonyEnabled;
- (BOOL)isSwapAvailable;
- (BOOL)isAirplaneModeEnabled;
- (id)currentCommunicationsStatus;
- (BOOL)updateMuteStatus:(BOOL)a0;
- (BOOL)isFaceTimeVideoEnabled;
- (void).cxx_destruct;
- (BOOL)isMergeAvailable;
- (BOOL)isFaceTimeAudioEnabled;
- (BOOL)endAllCalls;
- (void)airplaneModeChanged;
- (void)callStateDidChangeNotification:(id)a0;
- (BOOL)isCellularSupported;
- (BOOL)currentMuteStatus;
- (BOOL)isHoldAndAcceptAvailable;
- (void)addNotificationObservers;
- (id)currentCallStates;
- (id)currentRecentsListWithCoalescing:(BOOL)a0 limit:(unsigned long long)a1;
- (BOOL)isHoldAvailable;
- (BOOL)sendDTMF:(int)a0 forCallWithUUID:(id)a1;
- (BOOL)endCallWithAction:(int)a0 callUUID:(id)a1;
- (BOOL)acceptCallWithAction:(int)a0 callUUID:(id)a1;
- (void)commStatusDidChangeNotification:(id)a0;
- (BOOL)isEndAndAcceptAvailable;
- (int)currentRegistrationStatus;
- (BOOL)initiateCallToDestination:(id)a0 withService:(int)a1 addressBookID:(id)a2;
- (unsigned long long)currentUnreadVoicemailCount;
- (void)callStateDidChangeForCall:(id)a0;
- (id)currentFavoritesListWithLimit:(unsigned long long)a0;
- (void)removeNotificationObservers;
- (id)currentLocalizedCarrierName;
- (void)favoritesListDidChangeNotification:(id)a0;
- (BOOL)initiateCallToVoicemail;
- (BOOL)isInitiateCallAllowed;
- (BOOL)mergeCalls;

@end
