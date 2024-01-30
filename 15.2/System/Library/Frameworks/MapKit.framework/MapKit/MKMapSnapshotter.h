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

- (id)initWithOptions:(id)a0;
- (void)_drawAppleLogoIfNecessaryOnSnapshot:(id)a0;
- (void)_exitBackground:(id)a0;
- (BOOL)_shouldRenderLogoForSnapshotDimensions;
- (void).cxx_destruct;
- (void)_cancel;
- (id)init;
- (BOOL)_isWidget;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)_failWithError:(id)a0;
- (void)_succeedWithSnapshot:(id)a0;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (void)startWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)dealloc;
- (void)cancel;
- (void)_cleanupSnapshotCreator;
- (void)_deliverSnapshot:(id)a0;
- (void)_enterBackground:(id)a0;
- (void)_performSnapshot;

@end
