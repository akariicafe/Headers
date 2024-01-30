@class NSXPCConnection;

@interface CARSessionRequestClient : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelRequests;
- (void)prepareForRemovingWiFiUUID:(id)a0 completion:(id /* block */)a1;
- (void)startAdvertisingCarPlayControlForUSB;
- (void)startAdvertisingCarPlayControlForWiFiUUID:(id)a0;
- (void)startSessionWithHost:(id)a0 completion:(id /* block */)a1;
- (void)stoppedSessionForHostIdentifier:(id)a0;

@end
