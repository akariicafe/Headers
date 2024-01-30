@class NSMutableDictionary, VCMediaKeyIndex, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VCSecurityKeyManager : NSObject {
    id _delegate;
    id _reportingAgentWeak;
    NSMutableArray *_unknownKeyIndexList;
    NSMutableDictionary *_sendKeys;
    NSMutableDictionary *_receiveKeys;
    NSMutableDictionary *_prunePendingReceiveKeys;
    VCMediaKeyIndex *_latestSendKeyIndex;
    VCMediaKeyIndex *_latestReceiveKeyIndex;
    VCMediaKeyIndex *_keyIndexNotReceived;
    BOOL _isSendKeysCleanUpPending;
    BOOL _isReceiveKeysCleanUpPending;
    BOOL _forceRemoteMKMMissing;
    double _keyMaterialNotUsedTimeout;
    NSObject<OS_dispatch_queue> *_keyManagerQueue;
    double _lastKeyIndexNotReceived;
    NSObject<OS_dispatch_source> *_pruneTimer;
    NSObject<OS_dispatch_source> *_encryptionKeyRollTimer;
    BOOL _isRunning;
}

@property (nonatomic) struct opaqueRTCReporting { } *reportingAgent;

- (id)initWithDelegate:(id)a0;
- (void)start;
- (id)delegate;
- (void)dealloc;
- (void)stop;
- (void)stopTimers;
- (BOOL)addSecurityKeyMaterial:(id)a0;
- (void)pruneSendKeyMaterialWithDelay:(double)a0;
- (id)getRecvKeyMaterialWithIndex:(id)a0;
- (BOOL)associateMKI:(id)a0 withClientID:(id)a1;
- (id)getLatestSendKeyMaterial;
- (void)releaseTimers;
- (BOOL)startTimers;
- (void)handlePruneTimerEventAndReschedule;
- (void)scheduleEncryptionRollTimerWithDelay:(double)a0;
- (double)pruneAllExpiredKeys;
- (void)schedulePruneTimer:(double)a0;
- (long long)getNotUsedTimeout;
- (double)firstExpirationTime;
- (id)copyMKMWithPrefix:(id)a0;
- (id)getSendKeyMaterialWithIndex:(id)a0;
- (id)getLatestRecvKeyMaterial;
- (void)pruneRecvKeyMaterialWithDelay:(double)a0;

@end
