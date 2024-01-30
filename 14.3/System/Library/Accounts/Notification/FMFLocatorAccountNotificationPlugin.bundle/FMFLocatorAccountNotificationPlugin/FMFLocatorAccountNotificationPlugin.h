@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface FMFLocatorAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionCreationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_destroyXPCConnection;
- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (id)_currentXPCConnection;

@end
