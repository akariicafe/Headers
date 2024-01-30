@class RPCompanionLinkDevice, RPTextInputSession, RPHIDSession, NSString, NSDictionary, RPCompanionLinkClient, TVRCRapportMediaEventsManager, RPSiriSession, RPHIDTouchSession;
@protocol _TVRCCompanionLinkClientWrapperDelegate;

@interface TVRCRPCompanionLinkClientWrapper : NSObject <RPSiriSessionDelegate>

@property (retain, nonatomic) TVRCRapportMediaEventsManager *mediaManager;
@property (retain, nonatomic) RPCompanionLinkClient *companionClient;
@property (retain, nonatomic) RPCompanionLinkDevice *device;
@property (retain, nonatomic) RPSiriSession *siriSession;
@property (retain, nonatomic) RPHIDSession *hidSession;
@property (retain, nonatomic) RPHIDTouchSession *hidTouchSession;
@property (retain, nonatomic) RPTextInputSession *textInputSession;
@property (copy, nonatomic) id /* block */ rtiSessionHandler;
@property (readonly, copy, nonatomic) NSString *sourceVersion;
@property (nonatomic) unsigned long long featureFlags;
@property (nonatomic) BOOL activated;
@property (nonatomic) BOOL authenticated;
@property (nonatomic) BOOL startedSetup;
@property (nonatomic) BOOL connected;
@property (nonatomic) BOOL hidSessionActivated;
@property (nonatomic) BOOL hidTouchSessionActivated;
@property (nonatomic) BOOL textInputSessionActivated;
@property (nonatomic) BOOL pttFeatureSupported;
@property (nonatomic) BOOL isInvalidating;
@property (copy, nonatomic) id /* block */ invalidationCompletionBlock;
@property (nonatomic, getter=isSiriEnabled) BOOL siriEnabled;
@property (nonatomic) long long attentionState;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (readonly, copy, nonatomic) NSString *model;
@property (weak, nonatomic) id<_TVRCCompanionLinkClientWrapperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithDevice:(id)a0;

- (BOOL)isPaired;
- (id)initWithDevice:(id)a0;
- (void)connect;
- (void)disconnectWithError:(id)a0;
- (void)disconnect;
- (long long)connectionType;
- (void)reconnect;
- (void).cxx_destruct;
- (id)_connectionInfo;
- (void)sendButtonEvent:(id)a0;
- (id)supportedButtons;
- (void)rpSiriSessionDidReceiveStopRecording;
- (void)_disconnectWithError:(id)a0;
- (void)_logError:(id)a0 name:(id)a1;
- (void)sendTouchEvent:(id)a0;
- (int)_commandForButtonEvent:(id)a0;
- (void)_createHidSession;
- (BOOL)_featureSupported:(id)a0;
- (void)_fetchSiriEnabledWithCompletionHandler:(id /* block */)a0;
- (void)_fetchTVSystemStatusAndStartMonitoring;
- (void)_handleSideEffectsForEvent:(id)a0;
- (void)_invalidateAndReset;
- (void)_launchApplicationOrURL:(id)a0;
- (void)_resolveFeatureFlags;
- (void)_setupFeatureServices;
- (void)_setupTextInputSession;
- (void)_setupTouchSession;
- (void)_startMonitoringTVSystemStatus;
- (int)_stateForButtonEvent:(id)a0;
- (void)_stopMonitoringTVSystemStatus;
- (id)_stringForFeatureFlags:(unsigned long long)a0;
- (void)_updateAttentionState:(long long)a0;
- (void)_updateConnectedState;
- (void)getCurrentRTISourceSession:(id /* block */)a0;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;
- (void)setRTISessionHandler:(id /* block */)a0;
- (BOOL)supportsTouchEvents;

@end
