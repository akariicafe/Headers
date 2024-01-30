@class UIColor, NSString, UIImage, PXImageRequester, UIView, PXFocusableUIImageView;

@interface PXAssetUIImageViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIImageViewBasicTile> {
    PXFocusableUIImageView *_imageView;
    UIView *_contentView;
    BOOL _hasPlaceholder;
}

@property (nonatomic, setter=_setContentSize:) struct CGSize { double width; double height; } _contentSize;
@property (nonatomic, setter=_setDesiredContentsRect:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _desiredContentsRect;
@property (retain, nonatomic) UIColor *placeholderColor;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) BOOL shouldAllowFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic) double cornerRadius;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIView *view;

- (void)_updateContentView;
- (void)becomeReusable;
- (void)imageDidChange;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)prepareForReuse;
- (void)_updateImageView;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; double x5; BOOL x6; struct CGSize { double x0; double x1; } x7; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x8; void *x9; })a0 withUserData:(id)a1;
- (void)_updateImageRequester;

@end
