@class NSFileCoordinator, NSMutableSet, FPDExtensionManager, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface FPDCoordinator : NSObject {
    NSMutableSet *_currentlyAccessedURLs;
    NSFileCoordinator *_fileCoordinator;
    NSOperationQueue *_coordinationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, weak, nonatomic) FPDExtensionManager *extensionManager;

- (void)cancel;
- (void)stopAccessingURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)startAccessingURLForAtomDuration:(id)a0;
- (void)resolveItemOrURL:(id)a0 recursively:(BOOL)a1 coordinateIfExport:(BOOL)a2 handler:(id /* block */)a3;
- (void)resolveItemOrURL:(id)a0 recursively:(BOOL)a1 andCoordinateWithHandler:(id /* block */)a2;
- (void)resolveItem:(id)a0 completion:(id /* block */)a1;
- (void)coordinateForMovingFromURL:(id)a0 toURL:(id)a1 toTargetFolderURL:(id)a2 targetMaterializeOption:(unsigned long long)a3 sourceMaterializeOption:(unsigned long long)a4 handler:(id /* block */)a5;
- (id)initWithExtensionManager:(id)a0 callbackQueue:(id)a1;
- (void)stopAccessingAllURLs;
- (void)coordinateAtURL:(id)a0 recursively:(BOOL)a1 handler:(id /* block */)a2;
- (void)resolveItem:(id)a0 recursively:(BOOL)a1 andCoordinateWithHandler:(id /* block */)a2;
- (id)_readingIntentWithURL:(id)a0 materializeOption:(unsigned long long)a1;
- (void)coordinateForCopyingFromURL:(id)a0 toURL:(id)a1 handler:(id /* block */)a2;
- (void)coordinateForMovingFromURL:(id)a0 toURL:(id)a1 handler:(id /* block */)a2;

@end
