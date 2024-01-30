@class UIImageView;
@protocol PXPerson;

@interface PXPeopleScalableAvatarView : PXSmartScaleView {
    double _imageViewCornerRadius;
}

@property (retain) UIImageView *imageView;
@property (retain, nonatomic) id<PXPerson> person;
@property (nonatomic) BOOL useCornerRadius;
@property (nonatomic) BOOL useRoundAvatar;

- (void)updateImage;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setPersonAndWaitForImage:(id)a0;
- (void)_updateImageViewCornerWithRadius:(double)a0;
- (void)viewScaleDidChange;
- (void)_updateImageAndWait:(BOOL)a0;

@end
