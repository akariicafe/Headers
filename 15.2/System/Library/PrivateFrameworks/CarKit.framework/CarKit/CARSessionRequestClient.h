@class NSXPCConnection;

@interface CARSessionRequestClient : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;

- (void)cancelRequests;
- (void)startAdvertisingCarPlayControlForWiFiUUID:(id)a0;
- (void).cxx_destruct;
- (void)startSessionWithHost:(id)a0 completion:(id /* block */)a1;
- (void)startAdvertisingCarPlayControlForUSB;
- (void)prepareForRemovingWiFiUUID:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;

@end
