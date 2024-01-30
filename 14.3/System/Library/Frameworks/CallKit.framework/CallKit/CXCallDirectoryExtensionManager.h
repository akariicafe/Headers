@class CXCallDirectoryManager, NSObject;
@protocol OS_dispatch_queue, CXCallDirectoryExtensionManagerDelegate;

@interface CXCallDirectoryExtensionManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<CXCallDirectoryExtensionManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) CXCallDirectoryManager *manager;
@property (nonatomic) int storeExtensionsChangedNotifyToken;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPrioritizedExtensionIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)extensionsWithCompletionHandler:(id /* block */)a0;
- (void)_extensionsChanged;
- (void)beginObservingExtensions;
- (void)setEnabled:(BOOL)a0 forExtension:(id)a1 completion:(id /* block */)a2;

@end
