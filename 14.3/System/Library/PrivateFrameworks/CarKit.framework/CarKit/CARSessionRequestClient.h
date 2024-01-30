@class NSXPCConnection;

@interface CARSessionRequestClient : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;

- (void)cancelRequests;
- (void)prepareForRemovingWiFiUUID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startSessionWithHost:(id)a0 completion:(id /* block */)a1;
- (void)startAdvertisingCarPlayControlForWiFiUUID:(id)a0;
- (void)startAdvertisingCarPlayControlForUSB;

@end
