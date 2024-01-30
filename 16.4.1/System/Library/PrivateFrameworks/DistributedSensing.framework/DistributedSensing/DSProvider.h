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

- (void)startedProviderWithOptions:(id)a0;
- (void)_stopCASessionMetricCollectionWithStopReason:(int)a0;
- (void)_removeCurrentListenerWithStopReason:(int)a0;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)_startCASessionMetricCollection;
- (void)_receivedDataRequest:(id)a0 options:(id)a1 responseHandler:(id /* block */)a2;
- (void)subscriptionExpired;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)_heartBeatWithListener;
- (void)_sendRequestID:(id)a0 request:(id)a1 device:(id)a2 options:(id)a3 responseHandler:(id /* block */)a4;
- (void)_addNewListener:(id)a0;
- (void)_didFindDevice:(id)a0;
- (void)_sendMotionData:(id)a0;
- (void)_fetchScreenState;
- (void)_didLoseDevice:(id)a0;
- (void)sendMotionData:(id)a0;
- (void)_stopProvider;
- (BOOL)_unPersistListenerState;
- (BOOL)_removePersistedState;
- (void)unsubscribed;
- (id)initWithDispatchQueue:(id)a0;
- (void)stopMotionDataProvider;
- (void)requestedMotionDataWithOption:(id)a0;
- (void)stoppedProvider;
- (void).cxx_destruct;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (BOOL)_persistListenerState;

@end
