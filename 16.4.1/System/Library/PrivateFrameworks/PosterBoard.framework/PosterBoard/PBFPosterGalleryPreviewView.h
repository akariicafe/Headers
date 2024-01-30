@class PBFPosterGalleryPreviewContentView, PBFPosterGalleryShadowContainerView, PBFPosterGalleryPreviewComplicationContentView, UIImage, PBFShadowView, UIView;
@protocol PBFPosterPreviewGenerator, PBFPosterPreview;

@interface PBFPosterGalleryPreviewView : UIView {
    PBFPosterGalleryPreviewComplicationContentView *_posterPreviewComplicationContentView;
    PBFPosterGalleryPreviewContentView *_posterPreviewContentView;
    PBFPosterGalleryShadowContainerView *_shadowContainerView;
    PBFShadowView *_shadowView;
    UIView *_loadingIndicatorContainerView;
}

@property (retain, nonatomic) id<PBFPosterPreview> posterPreview;
@property (weak, nonatomic) id<PBFPosterPreviewGenerator> posterPreviewGenerator;
@property (nonatomic) double posterPreviewScale;
@property (readonly, nonatomic) UIImage *posterPreviewImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } posterPreviewImageFrame;
@property (nonatomic) unsigned long long index;
@property (nonatomic) BOOL showsLoadingIndicator;

- (void)sizeToFit;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updatePreviewWithImage:(id)a0 posterPreview:(id)a1;
- (id)makeComplicationsPortalView;

@end
