@class NSString, NSMutableDictionary, BBDataProviderConnectionResolver, NSObject;
@protocol OS_dispatch_queue, BBDataProviderConnectionServerProxy;

@interface BBDataProviderConnection : NSObject <NSXPCListenerDelegate> {
    BBDataProviderConnectionResolver *_connectionResolver;
    NSObject<OS_dispatch_queue> *_clientCalloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    id<BBDataProviderConnectionServerProxy> _serverProxy;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BOOL _connected;
    NSMutableDictionary *_dataProvidersBySectionID;
    NSMutableDictionary *_parentFactoriesBySectionID;
}

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)ping:(id /* block */)a0;
- (id)addDataProvider:(id)a0;
- (id)_addDataProvider:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_queue_setServerProxy:(id)a0;
- (void)removeDataProviderWithSectionID:(id)a0;
- (void)addParentSectionInfo:(id)a0 displayName:(id)a1 icon:(id)a2 universalSectionID:(id)a3;
- (void)_invalidate;
- (void)addParentSectionInfo:(id)a0 displayName:(id)a1 icon:(id)a2;
- (id)addDataProvider:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)addDataProvider:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addParentSectionInfo:(id)a0 displayName:(id)a1 icon:(id)a2 unversalSectionID:(id)a3;
- (void)setServerProxy:(id)a0;
- (void)invalidate;
- (id)initWithServiceName:(id)a0 onQueue:(id)a1;
- (void)dealloc;

@end
