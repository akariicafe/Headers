@class MPCModelGenericAVItemAssetLoadProperties;

@interface MPCModelGenericAVItemHomeSharingLoadOperation : MPAsyncOperation

@property (retain, nonatomic) MPCModelGenericAVItemAssetLoadProperties *assetLoadProperties;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void).cxx_destruct;

@end
