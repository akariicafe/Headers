@class GKExtensionHostViewController, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface GKExtensionManager : NSObject <GKExtensionHostViewControllerDelegate>

@property (retain, nonatomic) GKExtensionHostViewController *extensionHostViewController;
@property (nonatomic) long long extensionLoadState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (copy, nonatomic) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)extensionDidTerminateWithError:(id)a0;
- (id)initWithExtensionBundleIdentifer:(id)a0 host:(id)a1;
- (void)instantiateViewControllerWithHost:(id)a0 handler:(id /* block */)a1;
- (BOOL)needToLoadExtension;

@end
