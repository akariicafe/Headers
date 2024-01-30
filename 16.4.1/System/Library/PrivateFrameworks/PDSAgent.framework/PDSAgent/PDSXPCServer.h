@class NSArray, NSString, NSMutableArray, NSObject;
@protocol PDSDaemonListenerVendor, OS_dispatch_workloop, PDSXPCInterfaceVendor, PDSXPCListener;

@interface PDSXPCServer : NSObject <PDSXPCListenerDelegate>

@property (retain, nonatomic) id<PDSXPCListener> XPCListener;
@property (retain, nonatomic) id<PDSXPCInterfaceVendor> interfaceVendor;
@property (retain, nonatomic) id<PDSDaemonListenerVendor> daemonListenerVendor;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop;
@property (retain, nonatomic) NSMutableArray *XPCClients;
@property (readonly, nonatomic) NSArray *connectedClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
