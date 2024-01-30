@class TVPContentKeySession, NSString, NSTimer, NSMutableArray, TVPStateMachine;

@interface VUIOfflineKeyRenewalManager : NSObject <VUIStoreFPSKeyLoaderDelegate, TVPDownloadDelegate>

@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableArray *keyLoaders;
@property (nonatomic) BOOL networkErrorOccurredDuringInvalidation;
@property (retain, nonatomic) NSTimer *keyRenewalTimer;
@property (retain, nonatomic) NSTimer *expirationTimer;
@property (retain, nonatomic) TVPContentKeySession *contentKeySession;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (retain, nonatomic) NSMutableArray *downloadsForRepairingKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)storeFPSKeyLoader:(id)a0 didLoadOfflineKeyData:(id)a1 forKeyRequest:(id)a2;
- (void)updateKeyRenewalAndExpiration;
- (void)_registerStateMachineHandlers;
- (void)_networkReachbilityDidChange:(id)a0;
- (void)download:(id)a0 didChangeStateTo:(long long)a1;
- (void)_isPlaybackUIBeingShownDidChange:(id)a0;
- (void)_expirationTimerDidFire:(id)a0;
- (void)_sendRenewalRequestForFirstArray:(id)a0 completion:(id /* block */)a1;
- (void)_fetchNewKeysForVideosWithBrokenKeys:(id)a0;
- (void)_renewalTimerDidFire:(id)a0;

@end
