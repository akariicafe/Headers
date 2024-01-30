@class NSString, NSURL, NSArray, NSMutableDictionary, NSDictionary, NSXPCStoreServerRequestHandlingPolicy, NSXPCListener, NSManagedObjectModel, NSMapTable;

@interface NSXPCStoreServer : NSObject <NSXPCServerProtocol, NSXPCListenerDelegate> {
    NSURL *_modelURL;
    NSManagedObjectModel *_model;
    NSURL *_storeURL;
    NSDictionary *_storeOptions;
    NSArray *_entitlementNames;
    NSXPCListener *_listener;
    NSXPCStoreServerRequestHandlingPolicy *_policy;
    NSMapTable *_connectionToCoordinatorMap;
    NSMutableDictionary *_cacheIDtoCoordinatorMap;
}

@property (retain, nonatomic) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (unsigned long long)debugDefault;

- (void)startListening;
- (id)errorHandlingDelegate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)setErrorHandlingDelegate:(id)a0;
- (oneway void)handleRequest:(id)a0 reply:(id /* block */)a1;
- (id)replacementObjectForXPCConnection:(id)a0 encoder:(id)a1 object:(id)a2;
- (id)initForStoreWithURL:(id)a0 usingModelAtURL:(id)a1 options:(id)a2 policy:(id)a3;
- (void)dealloc;
- (id)initForStoreWithURL:(id)a0 usingModel:(id)a1 options:(id)a2 policy:(id)a3;

@end
