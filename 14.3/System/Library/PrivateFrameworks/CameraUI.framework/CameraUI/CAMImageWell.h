@class NSString, UIImageView, UIImage, UIView, NSMutableArray;

@interface CAMImageWell : UIButton <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) UIImage *thumbnailImage;
@property (readonly, nonatomic) UIView *_containerView;
@property (readonly, nonatomic) UIImageView *_thumbnailImageView;
@property (readonly, nonatomic) NSMutableArray *_dimmingViewQueue;
@property (retain, nonatomic, setter=_setThumbnailImage:) UIImage *_thumbnailImage;
@property (retain, nonatomic, setter=_setPlaceholderImage:) UIImage *_placeholderImage;
@property (retain, nonatomic, setter=_setUuid:) NSString *_uuid;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long cameraOrientation;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tappableEdgeInsets;
@property (nonatomic, getter=isScaledForInteraction) BOOL scaledForInteraction;
@property (nonatomic, getter=isThumbnailImageHidden) BOOL thumbnailImageHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayoutStyle:(long long)a0;
- (void)setCameraOrientation:(long long)a0 animated:(BOOL)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_placeholderImageForLayoutStyle:(long long)a0;
- (void).cxx_destruct;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_affineTransformForImageOrientation:(long long)a0;
- (void)_updateForLayoutStyle;
- (void)_updateThumbnailImageAnimated:(BOOL)a0;
- (void)_performEmitAnimationWithImage:(id)a0 orientation:(long long)a1 withCompletionBlock:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scaledForInteraction:(BOOL)a1;
- (void)setThumbnailImage:(id)a0 animated:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (void)_updateThumbnailTransformFromCameraOrientation;
- (void)setScaledForInteraction:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)_removeFirstDimmingView;
- (void)setThumbnailImage:(id)a0 uuid:(id)a1 animated:(BOOL)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)recoverFromFailedThumbnailUpdate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_cornerRadiusForLayoutStyle:(long long)a0;
- (void)prepareForThumbnailUpdateFromCapture;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_commonCAMImageWellInitializationWithLayoutStyle:(long long)a0;

@end
