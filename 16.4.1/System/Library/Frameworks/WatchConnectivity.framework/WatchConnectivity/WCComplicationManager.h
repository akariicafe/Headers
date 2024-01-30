@class NSString, NSObject;
@protocol OS_dispatch_queue, WCComplicationManagerDelegate;

@interface WCComplicationManager : NSObject <WCPrivateXPCManagerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (weak, nonatomic) NSObject<WCComplicationManagerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)xpcManager:(id)a0 handlePairedSyncComplicationsStartedWithCompletionHandler:(id /* block */)a1;
- (void)xpcManager:(id)a0 handlePingForExtensionBundleID:(id)a1;
- (void)xpcManager:(id)a0 isExtensionPrivileged:(id)a1 completionHandler:(id /* block */)a2;

@end
