@class NSXPCListener, NSMapTable, NSString, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue, BMComputeSource;

@interface BMComputeSourceServer : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) NSXPCInterface *interface;
@property (readonly, nonatomic) NSMapTable *connections;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<BMComputeSource> source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithQueue:(id)a0 source:(id)a1;
- (id)init;
- (void)activate;
- (id)initWithQueue:(id)a0 source:(id)a1 listener:(id)a2;
- (void).cxx_destruct;

@end
