@interface RWIProtocolNetworkDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { void /* function */ **x0; } *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController { void /* function */ **x0; } *)a0;
- (void)dataReceivedWithRequestId:(id)a0 timestamp:(double)a1 dataLength:(int)a2 encodedDataLength:(int)a3;
- (void)loadingFailedWithRequestId:(id)a0 timestamp:(double)a1 errorText:(id)a2 canceled:(BOOL *)a3;
- (void)loadingFinishedWithRequestId:(id)a0 timestamp:(double)a1 sourceMapURL:(id *)a2 metrics:(id *)a3;
- (void)requestInterceptedWithRequestId:(id)a0 request:(id)a1;
- (void)requestServedFromMemoryCacheWithRequestId:(id)a0 frameId:(id)a1 loaderId:(id)a2 documentURL:(id)a3 timestamp:(double)a4 initiator:(id)a5 resource:(id)a6;
- (void)requestWillBeSentWithRequestId:(id)a0 frameId:(id)a1 loaderId:(id)a2 documentURL:(id)a3 request:(id)a4 timestamp:(double)a5 walltime:(double)a6 initiator:(id)a7 redirectResponse:(id *)a8 type:(long long *)a9 targetId:(id *)a10;
- (void)responseInterceptedWithRequestId:(id)a0 response:(id)a1;
- (void)responseReceivedWithRequestId:(id)a0 frameId:(id)a1 loaderId:(id)a2 timestamp:(double)a3 type:(long long)a4 response:(id)a5;
- (void)webSocketClosedWithRequestId:(id)a0 timestamp:(double)a1;
- (void)webSocketCreatedWithRequestId:(id)a0 url:(id)a1;
- (void)webSocketFrameErrorWithRequestId:(id)a0 timestamp:(double)a1 errorMessage:(id)a2;
- (void)webSocketFrameReceivedWithRequestId:(id)a0 timestamp:(double)a1 response:(id)a2;
- (void)webSocketFrameSentWithRequestId:(id)a0 timestamp:(double)a1 response:(id)a2;
- (void)webSocketHandshakeResponseReceivedWithRequestId:(id)a0 timestamp:(double)a1 response:(id)a2;
- (void)webSocketWillSendHandshakeRequestWithRequestId:(id)a0 timestamp:(double)a1 walltime:(double)a2 request:(id)a3;

@end
