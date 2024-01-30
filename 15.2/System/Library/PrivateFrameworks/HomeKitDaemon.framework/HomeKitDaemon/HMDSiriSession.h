@class HMDSiriStreamStartEvent, NSObject, HMDLogEventDispatcher, HMDActiveSiriSessionInfo, NSString, NSNumber, HMDSiriRemoteInputServer;
@protocol OS_xpc_object, OS_os_log;

@interface HMDSiriSession : NSObject <HMDActiveSiriSessionInfoDelegate, HMFLogging> {
    NSObject<OS_os_log> *_logger;
}

@property (readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher;
@property (retain, nonatomic) HMDSiriStreamStartEvent *streamStartMetric;
@property (weak, nonatomic) HMDSiriRemoteInputServer *server;
@property (retain, nonatomic) HMDActiveSiriSessionInfo *activeSessionInfo;
@property (retain, nonatomic) NSNumber *deviceType;
@property (nonatomic) BOOL isActivationPending;
@property (retain, nonatomic) NSObject<OS_xpc_object> *boostMessage;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)siriSessionForUI;

- (void)sendMsg:(const char *)a0 args:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)deactivate;
- (void)publish;
- (void)stopStream;
- (void)handleStopStream;
- (void)handleStartStream;
- (void)handleResetStream;
- (void)setActiveBulkSendSession:(id)a0;
- (void)activeSiriSession:(id)a0 didCreateAudioFrame:(id)a1 sequenceNumber:(id)a2 gain:(id)a3;
- (void)activeSiriSession:(id)a0 didReceiveButtonUpWithDuration:(id)a1;
- (void)activeSiriSession:(id)a0 didReceiveFirstPassMetadata:(id)a1;
- (void)activeSiriSessionDidStop:(id)a0;
- (id)initWithIdentifier:(id)a0 logEventDispatcher:(id)a1 deviceType:(id)a2;
- (id)initWithIdentifier:(id)a0 deviceType:(id)a1;
- (BOOL)activateWithAccessory:(id)a0 metadata:(id)a1;
- (BOOL)activateAfterHubInitiation;
- (id)activeSessionToken;
- (void)beginTrackingStreamStartMetricWithActivationType:(unsigned long long)a0;
- (void)maybeSubmitStreamStartMetricWithError:(id)a0;
- (BOOL)_startStream;
- (id)_createArgsDictionaryWithError:(id)a0;

@end
