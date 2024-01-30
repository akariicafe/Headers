@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXCMMImageViewModel : PXObservable

@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (void)setMediaProvider:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setHighlighted:(BOOL)a0;

@end
