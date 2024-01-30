@class NSMutableDictionary, VCMasterKeyIndex, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VCSecurityKeyManager : NSObject {
    NSMutableDictionary *_sendKeys;
    NSMutableDictionary *_receiveKeys;
    VCMasterKeyIndex *_latestSendKeyIndex;
    VCMasterKeyIndex *_latestReceiveKeyIndex;
    VCMasterKeyIndex *_keyIndexNotReceived;
    BOOL _isSendKeysCleanUpPending;
    BOOL _isReceiveKeysCleanUpPending;
    id _delegate;
    NSObject<OS_dispatch_queue> *_keyManagerQueue;
    BOOL _isKeyIndexNotReceivedReported;
    double _lastKeyIndexNotReceived;
    id _reportingAgentWeak;
    NSMutableArray *_unknownKeyIndexList;
}

- (void)dealloc;
- (id)delegate;
- (struct opaqueRTCReporting { } *)reportingAgent;
- (id)initWithDelegate:(id)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (BOOL)addSecurityKeyMaterial:(id)a0;
- (void)pruneSendKeyMaterialWithDelay:(double)a0;
- (void)pruneRecvKeyMaterialWithDelay:(double)a0;
- (id)getRecvKeyMaterialWithIndex:(id)a0;
- (id)getSendKeyMaterialWithIndex:(id)a0;
- (id)getLatestSendKeyMaterial;
- (id)getLatestRecvKeyMaterial;

@end
