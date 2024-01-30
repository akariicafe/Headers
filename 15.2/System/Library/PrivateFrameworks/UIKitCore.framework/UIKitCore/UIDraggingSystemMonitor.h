@class NSXPCListener, NSSet, NSString, NSMapTable, NSObject;
@protocol UIDraggingSystemMonitorDelegate, OS_dispatch_queue;

@interface UIDraggingSystemMonitor : NSObject <NSXPCListenerDelegate, _DUIClientSystemApp> {
    NSXPCListener *_systemListener;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMapTable *_sessionsBySessionInfo;
}

@property (readonly, nonatomic) NSSet *sessions;
@property (weak, nonatomic) id<UIDraggingSystemMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)new;

- (void)xpcQueue_acceptNewConnection:(id)a0;
- (BOOL)xpcQueue_shouldAcceptNewConnection:(id)a0;
- (id)sessionForDropSession:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (oneway void)dragDidBeginWithSystemSession:(id)a0 info:(id)a1 reply:(id /* block */)a2;
- (oneway void)dragDidEndWithSystemSession:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_init;

@end
