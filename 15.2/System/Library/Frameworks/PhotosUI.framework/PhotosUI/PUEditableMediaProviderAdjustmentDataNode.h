@class PHAdjustmentData, PUEditableMediaProvider;
@protocol PUEditableAsset;

@interface PUEditableMediaProviderAdjustmentDataNode : PXRunNode {
    int _requestID;
}

@property (readonly, nonatomic) id<PUEditableAsset> asset;
@property (readonly, nonatomic) PHAdjustmentData *adjustmentData;
@property (readonly, nonatomic) PUEditableMediaProvider *mediaProvider;

- (void)didCancel;
- (void)run;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1;
- (void).cxx_destruct;
- (void)_handleDidLoadAdjustmentData:(id)a0 error:(id)a1;

@end
