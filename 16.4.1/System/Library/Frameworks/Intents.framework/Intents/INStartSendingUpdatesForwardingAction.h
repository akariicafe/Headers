@class NSXPCListenerEndpoint, NSString, NSXPCConnection;
@protocol INIntentResponseObserver;

@interface INStartSendingUpdatesForwardingAction : INIntentForwardingAction <BSXPCCoding>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (readonly, nonatomic) id<INIntentResponseObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)responseClass;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)executeRemotelyWithVendorRemote:(id)a0 completionHandler:(id /* block */)a1;
- (void)executeLocallyWithIntentDeliverer:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 endpoint:(id)a1 observer:(id)a2;
- (id)initWithIntent:(id)a0 endpointProvider:(id)a1 observer:(id)a2;

@end
