@protocol CARSessionRequestHandling;

@interface CARSessionRequestHandlerProxy : NSObject <CARSessionRequestService>

@property (weak, nonatomic) id<CARSessionRequestHandling> requestHandler;

- (void).cxx_destruct;
- (void)service_cancelRequestsWithReply:(id /* block */)a0;
- (void)service_prepareForRemovingWiFiUUID:(id)a0 reply:(id /* block */)a1;
- (void)service_startAdvertisingCarPlayControlForUSBWithReply:(id /* block */)a0;
- (void)service_startAdvertisingCarPlayControlForWiFiUUID:(id)a0 reply:(id /* block */)a1;
- (void)service_startSessionWithHost:(id)a0 reply:(id /* block */)a1;
- (void)service_stoppedSessionWithHostIdentifier:(id)a0 reply:(id /* block */)a1;

@end
