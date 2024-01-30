@class NSXPCListener, NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, DDSManaging;

@interface DDSServer : NSObject <NSXPCListenerDelegate, DDSManagingDelegate>

@property (readonly, nonatomic) id<DDSManaging> manager;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *clientConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)interface;

- (void)handleEndedConnection:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithManager:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
