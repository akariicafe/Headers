@class NSString, NSMapTable;
@protocol SLDServiceMultiplexDelegate;

@interface SLDServiceListenerMultiplex : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSMapTable *serviceToListenerTable;
@property (retain, nonatomic) NSMapTable *listenerToServiceTable;
@property (retain, nonatomic) NSMapTable *serviceToConnectionsTable;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (weak, nonatomic) id<SLDServiceMultiplexDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptyMultiplex;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_acceptConnection:(id)a0 forService:(id)a1;
- (id)_listenerForService:(id)a0;
- (void)_logFullDescription;
- (void)_notifyDelegateIfEmpty;
- (void)_service:(id)a0 lostConnection:(id)a1;
- (id)endpointForServiceClass:(Class)a0;

@end
