@class CARSessionStatus, NSString, BKFaceDetectOperation, BKDevicePearl, NSObject;
@protocol OS_dispatch_source;

@interface AWPearlAttentionSampler : AWAttentionSampler <BKDevicePearlDelegate, BKFaceDetectOperationDelegate, CARSessionObserving> {
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    CARSessionStatus *_carSessionStatus;
    NSObject<OS_dispatch_source> *_operationStalledTimer;
    unsigned long long _operationCreateTime;
    unsigned long long _lastErrorTime;
    int _displayNotifyToken;
    BOOL _displayState;
    BOOL _smartCoverClosed;
    BOOL _carPlayConnected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionDidDisconnect:(id)a0;
- (void)setCurrentState:(int)a0;
- (void)sessionDidConnect:(id)a0;
- (void)operation:(id)a0 faceDetectStateChanged:(id)a1;
- (void)operation:(id)a0 stateChanged:(long long)a1;
- (void)operation:(id)a0 presenceStateChanged:(BOOL)a1;
- (int)currentState;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void)setDisplayState:(BOOL)a0;
- (id)initForUnitTest:(BOOL)a0;
- (void)faceDetectStalled:(id)a0;
- (void)device:(id)a0 pearlEventOccurred:(long long)a1;
- (void)updateFaceState:(int)a0;
- (void)triggerFaceDetectWithDeadline:(unsigned long long)a0;
- (void)setDisplayStateFromNotification;
- (void)cancelStalledTimer;
- (id)unitTestSampler;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (void)device:(id)a0 pearlStateChanged:(long long)a1;
- (void)shouldSample:(BOOL)a0 withDeadline:(unsigned long long)a1 withOptions:(union { })a2;
- (id)init;
- (void)cancelFaceDetect:(id)a0;
- (void)updateFaceState:(int)a0 withFaceMetadata:(struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; double x5; } *)a1;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)a0;
- (void)startStalledTimerForOperation:(id)a0;
- (void)updateSuppressedMaskWithDisplayState:(BOOL)a0 smartCoverClosed:(BOOL)a1 carPlayConnected:(BOOL)a2;
- (void)pearlAttentionSamplerErrorOccurred;
- (void)setCarplayStateFromNotification:(BOOL)a0;
- (void)operation:(id)a0 finishedWithReason:(long long)a1;
- (void)finishingFaceDetect:(id)a0;
- (void).cxx_destruct;
- (void)updateSamplingDeadline:(unsigned long long)a0 forClient:(id)a1;

@end
