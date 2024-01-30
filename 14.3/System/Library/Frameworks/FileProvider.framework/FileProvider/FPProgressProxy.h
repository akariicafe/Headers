@class NSURL, NSObservation;

@interface FPProgressProxy : NSProgress {
    id _subscriber;
    NSURL *_fileURL;
    BOOL _shouldStopAccessingURL;
    NSObservation *_totalUnitCountObservation;
    NSObservation *_fractionCompletedObservation;
    BOOL _didSetupParentProgress;
}

@property (nonatomic) BOOL updateFileCount;

+ (void)initialize;

- (void)_updateWithProgress:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCancellationHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stopTrackingIfStarted;
- (void)setProgressDidSetupHandler:(id /* block */)a0;
- (void)startTrackingFileURL:(id)a0 kind:(id)a1;

@end
