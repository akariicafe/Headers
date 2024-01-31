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

- (void)airplaneModeChanged;
- (void)initPlugin;
- (void)startPlugin;
- (void)stopPlugin;
- (BOOL)isAirplaneModeEnabled;
- (unsigned long long)currentCallCount;
- (id)currentCallStates;
- (id)currentLocalizedCarrierName;
- (BOOL)mergeCalls;
- (id)currentAudioAndVideoCalls;
- (BOOL)sendDTMF:(int)a0 forCallWithUUID:(id)a1;
- (void)addNotificationObservers;
- (BOOL)isHoldAvailable;
- (int)currentRegistrationStatus;
- (BOOL)isFaceTimeVideoEnabled;
- (BOOL)isSwapAvailable;
- (void)callStateDidChangeForCall:(id)a0;
- (void)callStateDidChangeNotification:(id)a0;
- (BOOL)endCallWithAction:(int)a0 callUUID:(id)a1;
- (BOOL)isTelephonyEnabled;
- (BOOL)updateHoldStatus:(BOOL)a0 forCallWithUUID:(id)a1;
- (id)currentRecentsListWithCoalescing:(BOOL)a0 limit:(unsigned long long)a1;
- (id)currentCommunicationsStatus;
- (void)commStatusDidChangeNotification:(id)a0;
- (id)currentFavoritesListWithLimit:(unsigned long long)a0;
- (BOOL)isMergeAvailable;
- (BOOL)endAllCalls;
- (BOOL)isEndAndAcceptAvailable;
- (BOOL)updateMuteStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)favoritesListDidChangeNotification:(id)a0;
- (BOOL)isFaceTimeAudioEnabled;
- (BOOL)acceptCallWithAction:(int)a0 callUUID:(id)a1;
- (BOOL)isCellularSupported;
- (int)currentSignalStrength;
- (BOOL)initiateCallToDestination:(id)a0 withService:(int)a1 addressBookID:(id)a2;
- (void)removeNotificationObservers;
- (BOOL)swapCalls;
- (BOOL)isInitiateCallAllowed;
- (BOOL)isHoldAndAcceptAvailable;
- (unsigned long long)currentUnreadVoicemailCount;
- (BOOL)initiateCallToVoicemail;
- (id)currentCarrierName;
- (BOOL)currentMuteStatus;
- (BOOL)initiateRedial;
- (void)recentsListDidChangeNotification:(id)a0;

@end
