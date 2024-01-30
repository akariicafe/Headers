@class MKMapSnapshotOptions, VKMapSnapshotCreator, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface MKMapSnapshotter : NSObject {
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _completionHandler;
    VKMapSnapshotCreator *_snapshotCreator;
    BOOL _needsResume;
    NSXPCConnection *_snapshotService;
}

@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void)cancel;
- (id)initWithOptions:(id)a0;
- (void)_enterBackground:(id)a0;
- (BOOL)_shouldShowDarkContent;
- (id)init;
- (void)startWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)_failWithError:(id)a0;
- (BOOL)_shouldRenderLogoForSnapshotDimensions;
- (void).cxx_destruct;
- (BOOL)_isWidget;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)_cleanupSnapshotCreator;
- (void)_succeedWithSnapshot:(id)a0;
- (void)_performSnapshot;
- (void)_cancel;
- (void)_exitBackground:(id)a0;
- (BOOL)_shouldDefaultToDarkContent;

@end
