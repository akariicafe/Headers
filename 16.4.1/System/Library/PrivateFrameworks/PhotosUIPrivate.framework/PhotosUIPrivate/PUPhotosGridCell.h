@class PUProgressIndicatorView, UIImageView, PUPhotoView, UIView, NSNumber, NSArray;

@interface PUPhotosGridCell : UICollectionViewCell {
    UIView *_selectionOverlayView;
    UIView *_selectionBadgeView;
    UIImageView *_cloudIconImageView;
    PUProgressIndicatorView *_progressIndicatorView;
    UIView *_highlightOverlayView;
    NSArray *_progressIndicatorViewConstraints;
}

@property (retain, nonatomic) PUPhotoView *photoContentView;
@property (retain, nonatomic) PUPhotoView *temporaryPhotoContentView;
@property (nonatomic) long long dragState;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isDraggable) BOOL draggable;
@property (nonatomic, getter=isSelectionBadgeVisible) BOOL selectionBadgeVisible;
@property (nonatomic, getter=isCloudIconVisible) BOOL cloudIconVisible;
@property (retain, nonatomic) NSNumber *progress;
@property (nonatomic) BOOL transitionFillerViewEnabled;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } fillerEdgeInsets;
@property (readonly, nonatomic) UIView *transitionFillerView;
@property (nonatomic) BOOL transitionIsAppearing;
@property (nonatomic) int currentImageRequestID;

+ (Class)_contentViewClass;

- (void)applyLayoutAttributes:(id)a0;
- (void)_updateHighlight;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void)updateConstraints;
- (BOOL)_disableRasterizeInAnimations;
- (void)_updateSubviewOrdering;
- (void).cxx_destruct;
- (void)dragStateDidChange:(long long)a0;
- (void)removeTemporaryPhotoContentView;
- (void)_updateContentViewClipsToBounds;
- (void)_layoutTransitionFillerView;
- (void)_updateCloudIcon;
- (void)_updateProgressImmediately:(BOOL)a0;
- (void)_updateSelectionBadge;
- (void)addTemporaryPhotoContentView;
- (void)setProgress:(id)a0 immediately:(BOOL)a1;
- (void)setTemporaryPhotoImage:(id)a0 with:(long long)a1;

@end
