@class RPCompanionLinkDevice, RPTextInputSession, RPHIDSession, _TVRCRapportMediaEventsManager, NSString, NSDictionary, RPCompanionLinkClient, RPSiriSession, RPHIDTouchSession;
@protocol _TVRCCompanionLinkClientWrapperDelegate;

@interface _TVRCRPCompanionLinkClientWrapper : NSObject

@property (retain, nonatomic) _TVRCRapportMediaEventsManager *mediaManager;
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
@property (nonatomic, getter=isSiriEnabled) BOOL siriEnabled;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (readonly, copy, nonatomic) NSString *model;
@property (weak, nonatomic) id<_TVRCCompanionLinkClientWrapperDelegate> delegate;

+ (id)wrapperWithDevice:(id)a0;

- (void)connect;
- (BOOL)isPaired;
- (id)initWithDevice:(id)a0;
- (void)disconnect;
- (id)description;
- (void).cxx_destruct;
- (long long)connectionType;
- (void)reconnect;
- (void)disconnectWithError:(id)a0;
- (void)sendButtonEvent:(id)a0;
- (id)supportedButtons;
- (void)_disconnectWithError:(id)a0;
- (BOOL)supportsTouchEvents;
- (void)sendTouchEvent:(id)a0;
- (void)sendEvent:(id)a0 options:(id)a1 response:(id /* block */)a2;
- (void)setRTISessionHandler:(id /* block */)a0;
- (void)getCurrentRTISourceSession:(id /* block */)a0;
- (void)_resolveFeatureFlags;
- (void)_invalidateAndReset;
- (void)_updateConnectedState;
- (void)_launchApplicationOrURL:(id)a0;
- (int)_commandForButtonEvent:(id)a0;
- (int)_stateForButtonEvent:(id)a0;
- (void)_handleSideEffectsForEvent:(id)a0;
- (id)_stringForFeatureFlags:(unsigned long long)a0;
- (BOOL)_featureSupported:(id)a0;
- (void)_fetchSiriEnabledWithCompletionHandler:(id /* block */)a0;
- (void)_createHidSession;
- (void)_setupFeatureServices;
- (void)_setupTouchSession;
- (void)_setupTextInputSession;

@end
