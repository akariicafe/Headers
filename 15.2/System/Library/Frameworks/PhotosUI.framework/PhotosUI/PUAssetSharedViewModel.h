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

- (id)newViewModelChange;
- (void)unregisterChangeObserver:(id)a0;
- (id)initWithAsset:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
