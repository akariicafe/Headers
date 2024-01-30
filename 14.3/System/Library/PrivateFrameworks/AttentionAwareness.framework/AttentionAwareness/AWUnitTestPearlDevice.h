@class AWUnitTestFaceDetectOperation, NSObject;
@protocol OS_dispatch_queue, BKDevicePearlDelegate;

@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler> {
    struct { unsigned long long sampleCount; unsigned long long pollCount; unsigned long long singleShotCount; } _sampleStats;
    NSObject<OS_dispatch_queue> *_awQueue;
    AWUnitTestFaceDetectOperation *_lastOperation;
    id /* block */ _displayCallback;
    id /* block */ _smartCoverCallback;
}

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *sampleStatsPtr;
@property BOOL facePresent;
@property BOOL pearlError;

+ (id)sharedDevice;

- (id)init;
- (void).cxx_destruct;
- (id)createPresenceDetectOperationWithError:(id *)a0;
- (void)setSmartCoverClosed:(BOOL)a0;
- (void)setDisplayCallback:(id /* block */)a0;
- (void)setDisplayState:(BOOL)a0;
- (void)getStatsWithBlock:(id /* block */)a0;
- (void)resetStats;
- (void)setSampleState:(BOOL)a0;
- (void)setSampleState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSampleState:(BOOL)a0 deliverEvent:(BOOL)a1;
- (void)setSampleState:(BOOL)a0 deliverEvent:(BOOL)a1 reply:(id /* block */)a2;
- (void)setDisplayState:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSmartCoverClosed:(BOOL)a0 reply:(id /* block */)a1;
- (void)setSmartCoverCallback:(id /* block */)a0;
- (void)setPearlErrorState:(BOOL)a0;
- (void)setPearlErrorState:(BOOL)a0 reply:(id /* block */)a1;
- (void)deliverPearlDeviceState:(long long)a0;
- (void)deliverPearlDeviceEvent:(long long)a0;

@end
