@class NSXPCConnection, NSString, BrightnessSystemInternal;

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol> {
    unsigned long long _clientID;
    BOOL _clientIDSet;
}

@property (nonatomic) BrightnessSystemInternal *server;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reconnect;
- (void)clientCopyPropertyWithKey:(id)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (id)copyClientID;
- (void)registerNotificationForProperties:(id)a0;
- (void)clientSetPropertyWithKey:(id)a0 property:(id)a1;

@end
