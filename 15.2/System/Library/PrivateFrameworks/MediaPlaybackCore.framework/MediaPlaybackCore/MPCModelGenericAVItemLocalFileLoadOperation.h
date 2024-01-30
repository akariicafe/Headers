@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemLocalFileLoadOperation : MPAsyncOperation

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (nonatomic) BOOL requirePreferredAssetQuality;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;
- (long long)_loadedAudioAssetTypeForFileAsset:(id)a0;
- (BOOL)isHLSFileAsset:(id)a0;

@end
