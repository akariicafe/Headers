@class UIColor, NSArray, NSPointerArray, UIImage, UIView, PUPhotoDecoration, UIImageView;

@interface PUStackView : UIView {
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transforms[9];
    UIImageView *_combinedPhotoDecorationImageView;
    BOOL _imageHidden[9];
    BOOL _needsDynamicLayout;
}

@property (readonly, nonatomic) long long _numberOfViews;
@property (readonly, nonatomic) NSArray *_photoViews;
@property (readonly, nonatomic) NSPointerArray *_imageSizes;
@property (copy, nonatomic, setter=_setPhotoDecorationVariants:) NSArray *_photoDecorationVariants;
@property (retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
@property (retain, nonatomic) UIColor *cornersBackgroundColor;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) PUPhotoDecoration *photoDecoration;
@property (nonatomic) BOOL combinesPhotoDecorations;
@property (nonatomic) struct CGSize { double width; double height; } stackSize;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } stackOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } stackPerspectiveInsets;
@property (nonatomic) struct UIOffset { double horizontal; double vertical; } stackPerspectiveOffset;
@property (nonatomic) struct CGPoint { double x; double y; } stackPerspectiveFactor;
@property (retain, nonatomic) UIColor *gridBackgroundColor;
@property (nonatomic) double gridMargin;
@property (nonatomic) double gridItemSpacing;
@property (nonatomic) double posterSquareCornerRadius;
@property (nonatomic) double posterSubitemCornerRadius;
@property (nonatomic) BOOL continuousCorners;
@property (nonatomic) BOOL hasRoundedCorners;
@property (nonatomic) BOOL cornerOverlaysDisabled;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) NSArray *stackItemViews;
@property (nonatomic) long long numberOfVisibleItems;
@property (nonatomic) double itemAlpha;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } topLeftCornerOfFrontStackItem;
@property (retain, nonatomic) UIImage *emptyPlaceholderImage;
@property (nonatomic, getter=isEmpty) BOOL empty;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;

+ (long long)maximumNumberOfVisibleImagesForStyle:(unsigned long long)a0;
+ (long long)maximumNumberOfVisibleItemsForStyle:(unsigned long long)a0;

- (void)_updateHighlight;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateBackgroundView;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forItemAtIndex:(long long)a1;
- (void)_updateSubviewsOrdering;
- (void)setImageHidden:(BOOL)a0 forItemAtIndex:(long long)a1;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0 forItemAtIndex:(long long)a1;
- (id)_combinedPhotoDecorationsImage;
- (void)_getCenter:(struct CGPoint { double x0; double x1; } *)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forPhotoViewAtIndex:(long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_getStackFrame;
- (void)_rebuildDecorationVariants;
- (void)_setNeedsDynamicLayout;
- (void)_updateDynamicLayout;
- (void)_updateNumberOfViews;
- (void)_updatePhotoViews;
- (BOOL)isImageHiddenForItemAtIndex:(long long)a0;
- (id)newLayoutAttributesForItemAtIndex:(long long)a0 relativeToView:(id)a1;
- (id)newLayoutAttributesForVisbleItemsRelativeToView:(id)a0 maxCount:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectOfStackItemAtIndex:(long long)a0 inCoordinateSpace:(id)a1;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0 forItemAtIndex:(long long)a1;
- (void)setBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; long long x3; })a0 style:(long long)a1 forItemAtIndex:(long long)a2;
- (void)setCollectionTileLayoutTemplate:(id)a0 forItemAtIndex:(long long)a1;
- (void)setFeatureSpec:(id)a0 forItemAtIndex:(long long)a1;
- (void)setHasRoundedCorners:(BOOL)a0 withCornersBackgroundColor:(id)a1;
- (void)setSubtitle:(id)a0 forItemAtIndex:(long long)a1;
- (void)setTitle:(id)a0 forItemAtIndex:(long long)a1;
- (void)setTitleFontName:(id)a0 forItemAtIndex:(long long)a1;
- (BOOL)wouldCoverAllItemsInStackView:(id)a0;

@end
