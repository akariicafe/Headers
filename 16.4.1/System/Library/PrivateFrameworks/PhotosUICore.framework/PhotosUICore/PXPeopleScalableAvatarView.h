@class UIImageView, PHFace;
@protocol PXPerson;

@interface PXPeopleScalableAvatarView : PXSmartScaleView {
    double _imageViewCornerRadius;
    struct CGSize { double width; double height; } _imagePixelSize;
}

@property (retain) UIImageView *imageView;
@property (retain, nonatomic) id<PXPerson> person;
@property (retain, nonatomic) PHFace *face;
@property (nonatomic) BOOL useCornerRadius;
@property (nonatomic) BOOL useRoundAvatar;
@property (nonatomic) BOOL useLowMemoryMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateImage;
- (void).cxx_destruct;
- (void)_updateImageAndWait:(BOOL)a0;
- (void)_updateImageViewCornerWithRadius:(double)a0;
- (void)setPersonAndWaitForImage:(id)a0;
- (void)viewScaleDidChange;

@end
