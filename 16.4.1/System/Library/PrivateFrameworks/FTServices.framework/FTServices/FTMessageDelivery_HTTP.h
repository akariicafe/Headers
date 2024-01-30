@class IDSServerBag;
@protocol FTMessageDeliveryRemoteURLConnectionFactory, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryHTTPMobileNetworkManager;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {
    id<FTMessageDeliveryRemoteURLConnectionFactory> _remoteConnectionFactory;
    id<FTMessageDeliveryRemoteURLConnection> _remoteConnection;
    id<FTMessageDeliveryHTTPMobileNetworkManager> _mobileNetworkManager;
    BOOL _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
    id /* block */ _retryBackoffProvider;
    IDSServerBag *_idsServerBag;
    IDSServerBag *_iMessageServerBag;
}

- (void)networkStateChanged;
- (void)_clearRetryTimer;
- (void)_notifyDelegateAboutError:(id)a0;
- (BOOL)sendMessageAtTopOfTheQueue:(id)a0;
- (id)_processResultData:(id)a0 forMessage:(id)a1 error:(id *)a2;
- (BOOL)sendMessage:(id)a0;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (id)initWithIDSServerBag:(id)a0;
- (void)_urlRequestWithURL:(id)a0 andData:(id)a1 message:(id)a2 completionBlock:(id /* block */)a3;
- (void)_informDelegatesOfMessage:(id)a0 result:(id)a1 resultCode:(long long)a2 error:(id)a3;
- (void)_updateWiFiAssertions;
- (void)dealloc;
- (BOOL)_tryRetryMessageWithTimeInterval:(double)a0;
- (void)cancelMessage:(id)a0;
- (void)_cleanupURLConnection;
- (id)init;
- (void)invalidate;
- (BOOL)busy;
- (void)_dequeueIfNeeded;
- (void)_serverBagLoaded:(id)a0;
- (void).cxx_destruct;
- (id)initWithIDSServerBag:(id)a0 iMessageServerBag:(id)a1 remoteConnectionFactory:(id)a2 mobileNetworkManager:(id)a3 retryBackoffProvider:(id /* block */)a4;

@end
