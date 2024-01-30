@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface GKDiscoveryBonjour : NSObject {
    id /* block */ _collisionCallback;
    int _listeningPort;
}

@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *serviceDomain;
@property (nonatomic) struct _DNSServiceRef_t { } *browseRef;
@property (nonatomic) struct _DNSServiceRef_t { } *advertiseRef;
@property (retain, nonatomic) NSMutableArray *launchdSources;
@property (retain, nonatomic) NSMutableDictionary *resolveContainers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resolveContainersSyncQueue;
@property (copy, nonatomic) id /* block */ browseCallback;
@property (copy, nonatomic) id /* block */ connectionCallback;
@property (copy, nonatomic) id /* block */ serviceNameCollisionCallback;

- (void)stopBrowsing;
- (id)init;
- (void)dealloc;
- (BOOL)isAppleTV;
- (void)stopAdvertising;
- (id)initWithDomain:(id)a0 type:(id)a1;
- (void)stopResolve:(id)a0;
- (int)resolveName:(id)a0 onIndex:(unsigned int)a1 withCompletionHandler:(id /* block */)a2;
- (void)startAdvertisingServiceName:(id)a0 discoveryInfo:(id)a1;
- (int)startBrowsing:(id /* block */)a0;
- (void)closeListeningSockets;
- (int)ipV4Socket;
- (int)ipV6Socket;
- (void)createDispatchEventWithSocket:(int)a0;
- (void)setupBothListeningSockets;
- (void)sendBonjourRegistrationEvent:(id)a0 discoveryInfo:(id)a1;
- (void)setupListeningSockets;

@end
