@class NSString, GKSessionInternal, GKVoiceChatSessionInternal, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VoiceChatSessionRoster : NSObject {
    GKSessionInternal *_gkSession;
    NSString *_peerID;
    GKVoiceChatSessionInternal *_gkvs;
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSMutableArray *_connectedPeers;
    NSMutableDictionary *_peerStateTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } resMutex;
    BOOL _needsUpdateBeaconList;
    BOOL _waitingToCalculateFocus;
    unsigned int _deviceRating;
    unsigned int _focusRating;
    unsigned int _chosenFocusRating;
    unsigned int _focusID;
    BOOL _isBeaconUp;
    BOOL _hasFocus;
}

- (BOOL)hasFocus;
- (void)cleanup;
- (void)dealloc;
- (unsigned int)focusID;
- (id)initWithGKSession:(id)a0 peerID:(id)a1 voiceChatSession:(id)a2 sendQueue:(id)a3;
- (void)startBeaconWrapper:(id)a0;
- (id)subscribedPeers;
- (void)stopBeacon;
- (void)peer:(id)a0 didChangeState:(unsigned int)a1;
- (void)receivedBeacon:(id)a0 fromPeer:(id)a1;
- (BOOL)recalculateFocusRating;
- (void)updateBeacon;
- (void)configureDeviceRating;
- (void)startBeacon;
- (void)sendBeacons;
- (void)calculateFocus:(id)a0;
- (void)sendBeacon:(struct tagVoiceChatBeacon { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0 ToPeer:(id)a1;
- (void)processSubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0 beaconState:(id)a1 fromPeer:(id)a2;
- (void)processUnsubscribeBeacon:(struct tagVoiceChatBeacon { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0 beaconState:(id)a1 fromPeer:(id)a2;

@end
