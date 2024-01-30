@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface BSActionListener : BSBaseXPCServer {
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_queue_portToContextMap;
}

+ (BOOL)_registersWithNotifyd;

- (id)init;
- (id)initWithServiceName:(id)a0 onQueue:(id)a1;
- (void)dealloc;
- (void)queue_handleMessage:(id)a0 client:(id)a1;

@end
