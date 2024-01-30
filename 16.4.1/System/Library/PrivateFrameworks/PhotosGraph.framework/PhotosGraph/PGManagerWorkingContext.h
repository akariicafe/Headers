@class PGCurationManager, PHPhotoLibrary, NSObject, PGManager;
@protocol OS_os_log;

@interface PGManagerWorkingContext : NSObject {
    PGManager *_manager;
}

@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGCurationManager *curationManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection;

- (id)initWithManager:(id)a0 loggingConnection:(id)a1;
- (void)performSynchronousConcurrentGraphReadUsingBlock:(id /* block */)a0;
- (id)musicCuratorContextWithRecentlyUsedSongAdamIDs:(id)a0 error:(id *)a1;
- (id)musicCuratorContextWithCurationOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
