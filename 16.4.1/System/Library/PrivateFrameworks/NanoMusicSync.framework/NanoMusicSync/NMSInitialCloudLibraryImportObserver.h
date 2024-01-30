@class NSObject, NSMutableArray, ICCloudClient;
@protocol OS_dispatch_queue;

@interface NMSInitialCloudLibraryImportObserver : NSObject {
    NSMutableArray *_initialImportBlocks;
    BOOL _isObserving;
    ICCloudClient *_cloudClient;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)performBlockWhenLibraryIsReady:(id /* block */)a0;
- (void)_handleInitialCloudLibraryImportCompleted;
- (void)_performInitialImportBlocks;

@end
