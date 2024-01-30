@class NSString, DSClientMotionDataOptions, DSListenerDevice, RPCompanionLinkClient, NSObject, DSCoreAnalyticsEventHandler;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DSProvider : NSObject <DSProviderClientProtocol> {
    NSObject<OS_dispatch_queue> *_clientQueue;
    RPCompanionLinkClient *_linkClient;
    DSListenerDevice *_currentListener;
    int _screenStateToken;
    BOOL _isScreenON;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    BOOL _isPendingHeartbeat;
    NSObject<OS_dispatch_source> *_responseTimeoutTimer;
    BOOL _isLinkClientResponsePending;
    DSCoreAnalyticsEventHandler *_caEventHandler;
    unsigned long long _numHeartbeats;
    unsigned long long _numMotionStateMessages;
    int _linkType;
    BOOL _isUnterminatedSession;
}

@property (retain, nonatomic) DSClientMotionDataOptions *motionDataOptions;
@property BOOL isSubscriptionActive;
@property (nonatomic) BOOL isTestMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscriptionExpired;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (id)initWithDispatchQueue:(id)a0;
- (void)stoppedProvider;
- (void)sendMotionData:(id)a0;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)stopMotionDataProvider;
- (void)startedProviderWithOptions:(id)a0;
- (void)unsubscribed;
- (void).cxx_destruct;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)_didFindDevice:(id)a0;
- (void)_didLoseDevice:(id)a0;
- (void)_receivedDataRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (BOOL)_unPersistListenerState;
- (void)_sendMotionData:(id)a0;
- (void)_stopProvider;
- (void)_fetchScreenState;
- (void)_heartBeatWithListener;
- (void)_addNewListener:(id)a0;
- (void)_removeCurrentListenerWithStopReason:(int)a0;
- (void)_sendRequestID:(id)a0 request:(id)a1 device:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)_startCASessionMetricCollection;
- (BOOL)_persistListenerState;
- (BOOL)_removePersistedState;
- (void)_stopCASessionMetricCollectionWithStopReason:(int)a0;

@end
