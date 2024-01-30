@class NSString;

@interface REResourceFetchClientObject : NSObject <REResourceFetchService>

@property (readonly, nonatomic) struct ResourceFetchManager { void /* function */ **x0; BOOL x1; struct Queue { id x0; } x2; struct ListenerDelegate { id x0; } x3; struct Listener { id x0; } x4; struct Queue { id x0; } x5; struct DynamicArray<re::ResourceFetchManager::Connection> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct Connection *x4; } x6; struct DynamicArray<re::SharedPtr<re::ResourceRequest> > { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct SharedPtr<re::ResourceRequest> *x4; } x7; } *resourceFetchManager;
@property (readonly, copy, nonatomic) NSString *redactedDescription;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidversion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
