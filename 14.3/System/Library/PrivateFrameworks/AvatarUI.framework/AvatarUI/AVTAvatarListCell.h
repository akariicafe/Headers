@class AVTView, NSString, AVTImageTransitioningContainerView, UIImage, UIView;
@protocol AVTAvatarRecord;

@interface AVTAvatarListCell : UICollectionViewCell <AVTAvatarTransitionModel>

@property (retain, nonatomic) AVTView *avtView;
@property (readonly, nonatomic) AVTImageTransitioningContainerView *containerView;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIView *avtViewContainer;
@property (retain, nonatomic) id<AVTAvatarRecord> avatar;
@property (nonatomic) struct CGSize { double x0; double x1; } aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)liveView;
- (void)applyFullAlpha;
- (void)applyBaseAlpha;
- (void)layoutSubviews;
- (void)downcastWithCellHandler:(id /* block */)a0 listCellHandler:(id /* block */)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImageViewVisible:(BOOL)a0;
- (void)beginUsingAVTViewFromSession:(id)a0;
- (void)endUsingAVTView;
- (id)snapshotViewAfterScreenUpdates:(BOOL)a0;
- (void)transitionStaticViewToFront;
- (void)transitionLiveViewToFront;
- (void)setImage:(id)a0 animated:(BOOL)a1;

@end
