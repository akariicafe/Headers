@class PUAssetSharedViewModelChange, NSProgress, PUOperationStatus;
@protocol PUDisplayAsset;

@interface PUAssetSharedViewModel : PUViewModel

@property (readonly, nonatomic) PUAssetSharedViewModelChange *currentChange;
@property (nonatomic) BOOL needsDeferredProcessing;
@property (nonatomic) unsigned short deferredProcessingNeeded;
@property (retain, nonatomic) id<PUDisplayAsset> asset;
@property (retain, nonatomic) PUOperationStatus *loadingStatus;
@property (retain, nonatomic) NSProgress *saveProgress;
@property (nonatomic) long long saveState;
@property (nonatomic) long long flippingFullSizeRenderState;

- (void)registerChangeObserver:(id)a0;
- (id)newViewModelChange;
- (void)unregisterChangeObserver:(id)a0;
- (id)initWithAsset:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
