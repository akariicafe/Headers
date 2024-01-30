@class PUPhotosZoomingSharingGridCell, PUPhotoView, UIView;

@interface PUPhotosSharingGridCell : UICollectionViewCell {
    UIView *_highlightOverlayView;
    struct CGPoint { double x; double y; } _originalZoomPoint;
    struct CGPoint { double x; double y; } _lastZoomPoint;
    PUPhotosZoomingSharingGridCell *_zoomingCell;
    UIView *_zoomingCellSuperview;
}

@property (readonly, nonatomic) PUPhotoView *photoView;
@property (nonatomic) long long currentImageRequestID;

- (void)_updateHighlight;
- (void)_updateSubviewOrdering;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;

@end
