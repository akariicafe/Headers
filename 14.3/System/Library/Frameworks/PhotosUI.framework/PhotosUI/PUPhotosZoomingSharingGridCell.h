@class UIView;

@interface PUPhotosZoomingSharingGridCell : PUPhotosSharingGridCell {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _defaultBounds;
    unsigned long long _badgesLayoutAnchor;
    UIView *_selectionView;
    struct CGPoint { double x; double y; } _selectionViewDefaultCenter;
    UIView *_optionView;
    struct CGPoint { double x; double y; } _optionViewDefaultCenter;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selectionView:(id)a1 optionView:(id)a2 layoutAnchor:(unsigned long long)a3;

@end
