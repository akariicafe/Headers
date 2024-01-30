@class MKMapSnapshotOptions, VKMapSnapshotCreator, NSXPCConnection, geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface MKMapSnapshotter : NSObject {
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _completionHandler;
    geo_isolater *_isolation;
    NSXPCConnection *_snapshotService;
    VKMapSnapshotCreator *_snapshotCreator;
    BOOL _needsResume;
}

@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void)_failWithError:(id)a0;
- (void)_performSnapshot;
- (void)_exitBackground:(id)a0;
- (void)_cancel;
- (void)_succeedWithSnapshot:(id)a0;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (void)_cleanupSnapshotCreator;
- (void)_respondWithError:(id)a0;
- (void)_deliverSnapshot:(id)a0;
- (void)startWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (void)dealloc;
- (BOOL)_shouldRenderLogoForSnapshotDimensions;
- (void)_enterBackground:(id)a0;
- (void)_drawAppleLogoIfNecessaryOnSnapshot:(id)a0;
- (BOOL)_isWidget;
- (id)init;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;

@end
