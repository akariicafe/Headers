@class NSString, BKFaceDetectOperation, BKDevicePearl, NSObject;
@protocol OS_dispatch_source;

@interface AWPearlAttentionSampler : AWAttentionSampler <BKDevicePearlDelegate, BKFaceDetectOperationDelegate> {
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    NSObject<OS_dispatch_source> *_operationStalledTimer;
    unsigned long long _operationCreateTime;
    unsigned long long _lastErrorTime;
    int _displayNotifyToken;
    BOOL _displayState;
    BOOL _smartCoverClosed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCurrentState:(int)a0;
- (int)currentState;
- (id)init;
- (void).cxx_destruct;
- (void)operation:(id)a0 faceDetectStateChanged:(id)a1;
- (id)unitTestSampler;
- (void)operation:(id)a0 stateChanged:(long long)a1;
- (id)initForUnitTest:(BOOL)a0;
- (void)operation:(id)a0 presenceStateChanged:(BOOL)a1;
- (void)operation:(id)a0 finishedWithReason:(long long)a1;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void)device:(id)a0 pearlEventOccurred:(long long)a1;
- (void)device:(id)a0 pearlStateChanged:(long long)a1;
- (void)setDisplayState:(BOOL)a0;
- (void)updateSamplingDeadline:(unsigned long long)a0 forClient:(id)a1;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)a0;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (void)shouldSample:(BOOL)a0 withDeadline:(unsigned long long)a1;
- (void)triggerFaceDetectWithDeadline:(unsigned long long)a0;
- (void)faceDetectStalled:(id)a0;
- (void)finishingFaceDetect:(id)a0;
- (void)cancelFaceDetect:(id)a0;
- (void)updateFaceState:(int)a0;
- (void)updateFaceState:(int)a0 withFaceMetadata:(struct AWFaceDetectMetadata { BOOL x0; double x1; double x2; double x3; unsigned long long x4; } *)a1;
- (void)pearlAttentionSamplerErrorOccurred;
- (void)startStalledTimerForOperation:(id)a0;
- (void)cancelStalledTimer;
- (void)updateSuppressedMaskWithDisplayState:(BOOL)a0 smartCoverClosed:(BOOL)a1;
- (void)setDisplayStateFromNotification;

@end
