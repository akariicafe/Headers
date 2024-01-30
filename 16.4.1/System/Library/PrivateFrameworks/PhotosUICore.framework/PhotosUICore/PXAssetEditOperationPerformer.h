@class NSString, NSProgress;
@protocol PXDisplayAsset;

@interface PXAssetEditOperationPerformer : PXAction

@property (readonly, copy, nonatomic) NSString *editOperationType;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) NSProgress *progress;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEditOperationType:(id)a0 asset:(id)a1;

@end
