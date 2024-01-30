@class NSFileCoordinator, NSMutableSet, FPDExtensionManager, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface FPDCoordinator : NSObject {
    NSMutableSet *_currentlyAccessedURLs;
    NSFileCoordinator *_fileCoordinator;
    NSOperationQueue *_coordinationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, weak, nonatomic) FPDExtensionManager *extensionManager;

+ (id)requestForClaimID:(id)a0;

- (void).cxx_destruct;
- (void)stopAccessingURL:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)resolveItemOrURL:(id)a0 recursively:(BOOL)a1 coordinateIfExport:(BOOL)a2 request:(id)a3 handler:(id /* block */)a4;
- (void)resolveItemOrURL:(id)a0 recursively:(BOOL)a1 request:(id)a2 andCoordinateWithHandler:(id /* block */)a3;
- (void)startAccessingURLForAtomDuration:(id)a0;
- (void)resolveItem:(id)a0 completion:(id /* block */)a1;
- (void)coordinateForMovingFromURL:(id)a0 toURL:(id)a1 toTargetFolderURL:(id)a2 targetMaterializeOption:(unsigned long long)a3 sourceMaterializeOption:(unsigned long long)a4 request:(id)a5 handler:(id /* block */)a6;
- (id)initWithExtensionManager:(id)a0 callbackQueue:(id)a1;
- (void)stopAccessingAllURLs;
- (void)coordinateAtURL:(id)a0 recursively:(BOOL)a1 request:(id)a2 handler:(id /* block */)a3;
- (void)resolveItem:(id)a0 recursively:(BOOL)a1 request:(id)a2 andCoordinateWithHandler:(id /* block */)a3;
- (id)_readingIntentWithURL:(id)a0 materializeOption:(unsigned long long)a1;
- (void)coordinateForCopyingFromURL:(id)a0 toURL:(id)a1 request:(id)a2 handler:(id /* block */)a3;
- (void)coordinateForMovingFromURL:(id)a0 toURL:(id)a1 request:(id)a2 handler:(id /* block */)a3;

@end
