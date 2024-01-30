@class NSMutableArray, NSArray, NSString, NSMutableDictionary, CMContinuityCaptureTimeSyncClock, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CMContinuityCaptureClientBase : NSObject <ContinuityCaptureControlDelegate, ContinuityCaptureAVCNegotiationDataDelegate, ContinuityCaptureClockSynchronizationDelegate, ContinuityCaptureStillImageCaptureDelegate> {
    NSMutableDictionary *_availableSidecarStreamsByIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _connectionInterruptHandler;
    NSArray *_mediaIdentifiers;
    BOOL _active;
    CMContinuityCaptureTimeSyncClock *_timeSyncClock;
    NSObject<OS_dispatch_group> *_streamActivationGroup;
    id /* block */ _earlyActivationCompletionHandler;
    NSString *_earlyActivationCompletionMediaIdentifier;
    NSObject<OS_dispatch_group> *_earlyStreamActivationGroup;
    BOOL _pendingTimeSyncCallback;
    NSMutableArray *_timeSyncFailureLogs;
    NSMutableArray *_activationFailureLogs;
}

@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) long long transport;
@property (readonly, retain) NSArray *mediaIdentifers;
@property (readonly, retain) CMContinuityCaptureTimeSyncClock *timeSyncClock;
@property unsigned long long currentSessionID;
@property (readonly) id /* block */ statusHandler;
@property (readonly) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)activate:(id /* block */)a0;
- (void)cancel:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)connectionInterrupted:(id)a0;
- (id)debugInfo;
- (void).cxx_destruct;
- (void)reset:(id /* block */)a0 error:(id)a1;
- (void)sendMessage:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)_setValueForControl:(id)a0 completion:(id /* block */)a1;
- (void)_handleAVCNegotiation:(long long)a0 data:(id)a1;
- (void)_sendMessage:(id)a0 message:(id)a1 completion:(id /* block */)a2;
- (void)activateSidecarStream:(id)a0 completion:(id /* block */)a1;
- (void)activateSidecarStreams:(id /* block */)a0 option:(unsigned long long)a1;
- (void)createTimeSyncClockForSession:(id)a0 completion:(id /* block */)a1;
- (void)enqueueResponse:(id)a0 identifier:(id)a1;
- (void)handleAVCNegotiation:(long long)a0 data:(id)a1;
- (id)initWithQueue:(id)a0 mediaIdentifers:(id)a1;
- (void)logActivationFailure;
- (void)logTimeSyncFailures:(long long)a0;
- (void)registerOnetimeCallackForActivationCompletionOfEntity:(long long)a0 completion:(id /* block */)a1;
- (void)setConnectionInterruptHandler:(id /* block */)a0;
- (void)setValueForControl:(id)a0 completion:(id /* block */)a1;
- (void)setupSidecarStreams:(id /* block */)a0 earlyStreamCompletion:(id /* block */)a1 timeSyncClockCompletion:(id /* block */)a2 option:(unsigned long long)a3;
- (id)sidecarStreamForIdentifier:(id)a0;
- (void)teardownSidecarStreams:(id)a0 completion:(id /* block */)a1;

@end
