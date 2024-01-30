@class NSString, NSObject;
@protocol OS_xpc_object;

@interface CloudPairingAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (retain, nonatomic) NSObject<OS_xpc_object> *cloudKitConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountModified;
- (id)daemonConection;
- (void).cxx_destruct;
- (void)account:(id)a0 didPerformActionsForDataclasses:(id)a1;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
