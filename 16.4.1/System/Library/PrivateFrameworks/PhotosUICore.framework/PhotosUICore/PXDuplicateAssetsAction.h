@class PHFetchResult, NSProgress, NSArray, NSMutableArray;

@interface PXDuplicateAssetsAction : PXAssetsSelectionAction {
    NSMutableArray *_originalAssets;
    long long _assetCount;
    BOOL _didCheckDuplicateCapabilities;
    BOOL _canExtractStill;
    NSArray *_createdAssetLocalIdentifiers;
    PHFetchResult *_createdAssets;
}

@property (readonly, nonatomic) BOOL canExtractStill;
@property (nonatomic) BOOL duplicatesOriginal;
@property (nonatomic) BOOL duplicatesAsStill;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillImageTime;
@property (retain, nonatomic) NSProgress *actionProgress;
@property (copy, nonatomic) id /* block */ downloadCompletionHandler;
@property (readonly, nonatomic) PHFetchResult *createdAssets;

+ (BOOL)canPerformOnAllAssets:(id)a0;
+ (BOOL)canPerformOnAsset:(id)a0 inAssetCollection:(id)a1;

- (void)performAction:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)assetCount;
- (void)_checkDuplicateCapabilities;
- (id)actionNameLocalizationKey;
- (id)initWithSelectionSnapshot:(id)a0;
- (void)performUndo:(id /* block */)a0;

@end
