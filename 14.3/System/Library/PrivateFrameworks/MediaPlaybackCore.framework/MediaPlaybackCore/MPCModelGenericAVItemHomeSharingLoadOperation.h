@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemHomeSharingLoadOperation : MPAsyncOperation

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;

@end
