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

- (id)init;
- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (void)setShowStatusCheckmark:(BOOL)a0;
- (void)setMediaProvider:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setSubtitle:(id)a0;
- (void)setTitle:(id)a0;
- (void)setStatusString:(id)a0;
- (void)setHighlighted:(BOOL)a0;

@end
