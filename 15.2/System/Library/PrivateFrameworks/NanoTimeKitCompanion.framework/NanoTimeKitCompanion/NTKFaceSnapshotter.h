@class NSString, NTKFaceSnapshottingWindow;

@interface NTKFaceSnapshotter : NSObject <NTKComplicationCollectionObserver> {
    NTKFaceSnapshottingWindow *_snapshotWindow;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultModernSnapshotOptions;
+ (id)renderSnapshotFromWindow:(id)a0;
+ (id)renderSnapshotAndTexture:(id *)a0 fromWindow:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)complicationCollectionDidLoad:(id)a0;
- (void)_queue_serviceRequestIfIdle;
- (void)_setupNotificationForCollectionLoadForDevice:(id)a0 completion:(id /* block */)a1;
- (void)_mainQueue_serviceRequest:(id)a0 completion:(id /* block */)a1;
- (void)provideSnapshotOfFace:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)viewControllerForFace:(id)a0 withOptions:(id)a1;
- (void)_showSnapshotWindowForDevice:(id)a0;
- (void)_hideSnapshotWindow;
- (void)provideSnapshotOfFace:(id)a0 completion:(id /* block */)a1;

@end
