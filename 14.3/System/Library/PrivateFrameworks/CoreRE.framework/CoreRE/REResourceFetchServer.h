@class NSString;

@interface REResourceFetchServer : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) struct ResourceFetchManager { void /* function */ **x0; BOOL x1; struct Queue { id x0; } x2; struct ListenerDelegate { id x0; } x3; struct Listener { id x0; } x4; struct Queue { id x0; } x5; struct DynamicArray<re::ResourceFetchManager::Connection> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct Connection *x4; } x6; struct DynamicArray<re::SharedPtr<re::ResourceRequest> > { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct SharedPtr<re::ResourceRequest> *x4; } x7; } *resourceFetchManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)invalidate;
- (id)initWithResourceFetchManager:(struct ResourceFetchManager { void /* function */ **x0; BOOL x1; struct Queue { id x0; } x2; struct ListenerDelegate { id x0; } x3; struct Listener { id x0; } x4; struct Queue { id x0; } x5; struct DynamicArray<re::ResourceFetchManager::Connection> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct Connection *x4; } x6; struct DynamicArray<re::SharedPtr<re::ResourceRequest> > { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct SharedPtr<re::ResourceRequest> *x4; } x7; } *)a0;

@end
