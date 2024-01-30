@class AVTView, NSString, AVTImageTransitioningContainerView, UIImage, UIView, AVTStickerConfiguration;
@protocol AVTAvatarRecord;

@interface AVTAvatarListCell : UICollectionViewCell <AVTAvatarTransitionModel>

@property (retain, nonatomic) AVTView *avtView;
@property (readonly, nonatomic) AVTImageTransitioningContainerView *containerView;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIView *avtViewContainer;
@property (retain, nonatomic) id<AVTAvatarRecord> avatar;
@property (retain, nonatomic) AVTStickerConfiguration *configuration;
@property (nonatomic) struct CGSize { double x0; double x1; } aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)snapshotViewAfterScreenUpdates:(BOOL)a0;
- (id)liveView;
- (void)endUsingAVTView;
- (void)applyBaseAlpha;
- (void)applyFullAlpha;
- (void)beginUsingAVTViewFromSession:(id)a0;
- (void)downcastWithCellHandler:(id /* block */)a0 listCellHandler:(id /* block */)a1;
- (void)setImageViewVisible:(BOOL)a0;
- (void)transitionLiveViewToFront;
- (void)transitionStaticViewToFront;

@end
