@class NSString;
@protocol PXUIImageProvider, PXDisplayAsset;

@interface PXCMMPosterHeaderViewModel : PXObservable

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *statusString;
@property (readonly, nonatomic) BOOL showStatusCheckmark;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) id<PXUIImageProvider> mediaProvider;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)setMediaProvider:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setTitle:(id)a0;
- (void)setStatusString:(id)a0;
- (void)setShowStatusCheckmark:(BOOL)a0;

@end
