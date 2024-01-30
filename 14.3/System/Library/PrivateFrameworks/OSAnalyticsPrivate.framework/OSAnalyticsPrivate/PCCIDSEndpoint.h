@class NSString, IDSService, NSMutableDictionary;

@interface PCCIDSEndpoint : PCCEndpoint <IDSServiceDelegate> {
    IDSService *_pairedWatchService;
    IDSService *_homeDeviceService;
    NSMutableDictionary *_serviceByDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 hasBeenDeliveredWithContext:(id)a3;
- (void)service:(id)a0 account:(id)a1 incomingMessage:(id)a2 fromID:(id)a3;
- (void)service:(id)a0 account:(id)a1 incomingResourceAtURL:(id)a2 metadata:(id)a3 fromID:(id)a4 context:(id)a5;
- (id)startService:(id)a0;
- (void)runWithDelegate:(id)a0;
- (BOOL)isDeviceNearby:(id)a0;
- (id)send:(id)a0 message:(id)a1 error:(id *)a2;
- (id)send:(id)a0 file:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)deviceIds;
- (id)serviceByDeviceID:(id)a0;

@end
