@class HMDSiriRemoteInputServer, HMDActiveSiriSessionInfo, NSString;

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging>

@property (weak, nonatomic) HMDSiriRemoteInputServer *server;
@property (retain, nonatomic) HMDActiveSiriSessionInfo *activeSessionInfo;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)siriSessionForUI;

- (void)sendMsg:(const char *)a0 args:(id)a1;
- (void)publish;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)_stopStream;
- (void)deactivate;
- (void)invalidate;
- (void)handleResetStream;
- (void)handleStartStream;
- (void)handleStopStream;
- (void)activeSiriSessionDidStop:(id)a0;
- (void)activeSiriSession:(id)a0 didCreateAudioFrame:(id)a1 sequenceNumber:(id)a2 gain:(id)a3;
- (void)setActiveBulkSendSession:(id)a0;
- (BOOL)_startStream;
- (id)_createArgsDictionaryWithError:(id)a0;
- (BOOL)activateWithAccessory:(id)a0;
- (id)activeSessionToken;

@end
