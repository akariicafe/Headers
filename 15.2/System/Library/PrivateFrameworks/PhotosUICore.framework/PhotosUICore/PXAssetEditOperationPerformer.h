@class NSString, NSProgress;
@protocol PXDisplayAsset;

@interface PXAssetEditOperationPerformer : NSObject

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) NSProgress *progress;

- (void).cxx_destruct;
- (id)init;
- (void)performEditOperationWithCompletionHandler:(id /* block */)a0;
- (id)initWithEditOperationType:(id)a0 asset:(id)a1;

@end
