@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, CXCallDirectoryNSExtensionManagerDelegate;

@interface CXCallDirectoryNSExtensionManager : NSObject

@property (class, readonly, nonatomic) NSDictionary *baseExtensionMatchingAttributes;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXCallDirectoryNSExtensionManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) id extensionMatchingContext;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void)beginMatchingExtensions;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_beginMatchingExtensionsIfNecessary;
- (void)_extensionForIdentifier:(id)a0 containingAppBundleURL:(id)a1 completion:(id /* block */)a2;
- (void)extensionsWithCompletionHandler:(id /* block */)a0;
- (void)extensionWithIdentifier:(id)a0 inContainingAppWithProcessIdentifier:(int)a1 completion:(id /* block */)a2;

@end
