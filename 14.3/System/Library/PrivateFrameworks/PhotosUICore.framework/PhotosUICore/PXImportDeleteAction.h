@class NSString, NSProgress, NSArray, PXImportController, NSMutableArray;

@interface PXImportDeleteAction : PXImportConcurrentAction {
    NSArray *_assets;
    NSMutableArray *_removedAssets;
}

@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) NSString *sessionUuid;
@property (weak) PXImportController *importController;
@property BOOL userInitiatedDelete;

- (void)cancel;
- (id)performAction;
- (void)finish;
- (void).cxx_destruct;
- (void)_preAction;
- (void)dealloc;
- (id)initWithAssets:(id)a0;
- (BOOL)canDeleteAssets;
- (void)_performRealAction;
- (void)_performMockAction;
- (void)didRemove:(id)a0;
- (void)startObservingDeleteProgress;
- (void)stopObservingDeleteProgress;
- (void)sendActionProgress:(double)a0;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
