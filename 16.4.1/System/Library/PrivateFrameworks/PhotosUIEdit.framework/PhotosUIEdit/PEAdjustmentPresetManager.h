@class NSString, NSURL, PEEditActionEventBuilder, NSMutableDictionary, UIPasteboard, NSMutableArray, NSObject, PEEditActionBatch, PEPasteablePreset, PEResourceManager;
@protocol OS_dispatch_queue, PELoadingStatusDelegate;

@interface PEAdjustmentPresetManager : NSObject <PEEditActionBatchDelegate>

@property (class, readonly, nonatomic) PEAdjustmentPresetManager *sharedPresetManager;

@property (retain) NSMutableArray *mutableAdjustPresetArray;
@property (retain) NSMutableDictionary *adjustmentPresetURLMap;
@property (retain) NSURL *sharedPresetDirectoryURL;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingQueue;
@property (readonly, nonatomic) PEResourceManager *resourceManager;
@property (retain, nonatomic) PEEditActionEventBuilder *editActionEventBuilder;
@property (retain) UIPasteboard *pasteboard;
@property (weak, nonatomic) id<PELoadingStatusDelegate> asyncLoadingStatusManager;
@property (readonly, nonatomic) BOOL hasPresetOnPasteboard;
@property (readonly, nonatomic) PEEditActionBatch *currentBatchAction;
@property (readonly, nonatomic) BOOL isBusyWithBatchAction;
@property (readonly, nonatomic) PEPasteablePreset *presetFromPasteboard;
@property (nonatomic) BOOL crossPlatformSerializationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cancelCurrentBatchAction;
- (void)pastePreset:(id)a0 onAssets:(id)a1 async:(BOOL)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)replacePresets:(id)a0 onAssets:(id)a1 async:(BOOL)a2 progress:(id)a3 completion:(id /* block */)a4;
- (void)revertAdjustmentsOnAssets:(id)a0 async:(BOOL)a1 progress:(id)a2 completion:(id /* block */)a3;
- (void)clearPasteboard;
- (BOOL)assetHasPasteableAdjustments:(id)a0;
- (void)copyPresetFromAsset:(id)a0;
- (void)copyPresetFromCompositionController:(id)a0 sourceAsset:(id)a1;
- (void)_sendAnalyticsForCopyActionOnAsset:(id)a0 copiedCompositionController:(id)a1;
- (void)_copyPreset:(id)a0;
- (id)_editActionEventBuilderForAction:(id)a0 assets:(id)a1;
- (void)_sendAnalyticsForCurrentEditAction;
- (void)batch:(id)a0 didCancelAction:(long long)a1;
- (void)batch:(id)a0 didCompleteAction:(long long)a1 hasError:(BOOL)a2;
- (void)batch:(id)a0 willStartAction:(long long)a1;
- (void)copyPresetFromCompositionController:(id)a0;

@end
