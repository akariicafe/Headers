@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, CXCallDirectoryNSExtensionManagerDelegate;

@interface CXCallDirectoryNSExtensionManager : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (class, readonly, nonatomic) NSDictionary *baseExtensionMatchingAttributes;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXCallDirectoryNSExtensionManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) id extensionMatchingContext;
@property (copy, nonatomic) NSDictionary *extensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginMatchingExtensions;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)pluginsDidInstall:(id)a0;
- (void)_beginMatchingExtensionsIfNecessary;
- (void)_extensionForIdentifier:(id)a0 containingAppBundleURL:(id)a1 completion:(id /* block */)a2;
- (void)extensionWithIdentifier:(id)a0 inContainingAppWithProcessIdentifier:(int)a1 completion:(id /* block */)a2;
- (void)extensionsWithCompletionHandler:(id /* block */)a0;

@end
