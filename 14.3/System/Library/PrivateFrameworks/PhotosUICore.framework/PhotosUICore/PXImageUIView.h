@class UIView, NSString, NSArray, UIImage, PXFocusableUIImageView, NSMutableArray, PXRoundedCornerOverlayView, PXImageViewSpec;

@interface PXImageUIView : UIView <PXAdjustableContentsView> {
    NSMutableArray *_overlayViews;
    UIView *_floatingOverlayView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _floatingInsets;
    BOOL _hasParallax;
    unsigned long long _animationFlags;
    UIView *_snapshotView;
}

@property (readonly, nonatomic) PXFocusableUIImageView *_imageView;
@property (retain, nonatomic, setter=_setCornerView:) PXRoundedCornerOverlayView *_cornerView;
@property (copy, nonatomic, setter=_setOverlaySpecs:) NSArray *_overlaySpecs;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) PXImageViewSpec *spec;
@property (nonatomic) BOOL floatingViewEnabled;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL allowsFocus;
@property (nonatomic) long long contentMode;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic, getter=isFloatingRotationEnabled) BOOL floatingRotationEnabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateCorners;
- (void)_updateSubviewsOrdering;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_PXImageUIViewInitialization;
- (void)setFloatingOverlay:(id)a0 withInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 parallax:(BOOL)a2;
- (void)_updateFloatingOverlay;
- (void)setAnimating:(BOOL)a0 withFlags:(unsigned long long)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
