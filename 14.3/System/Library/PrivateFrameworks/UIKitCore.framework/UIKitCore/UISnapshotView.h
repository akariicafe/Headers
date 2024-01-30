@class UIColor, UIImageView, UIView, NSMutableArray;

@interface UISnapshotView : UIView {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentBeyondBounds;
    NSMutableArray *_edgePaddingViews;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _snapshotRect;
    unsigned char _disableEdgeAntialiasing : 1;
    unsigned char _disableVerticalStretch : 1;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgePadding;
@property (retain, nonatomic) UIColor *edgePaddingColor;
@property (readonly, nonatomic, getter=_snapshotView) UIView *snapshotView;
@property (readonly, nonatomic, getter=_contentSize) struct CGSize { double width; double height; } contentSize;
@property (nonatomic, getter=_contentOffset, setter=_setContentOffset:) struct CGPoint { double x; double y; } contentOffset;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (nonatomic, getter=isVerticalStretchEnabled) BOOL verticalStretchEnabled;
@property (nonatomic, getter=_snapshotRect, setter=_setSnapshotRect:) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } snapshotRect;
@property (retain, nonatomic) UIImageView *shadowView;
@property (nonatomic, getter=isEdgeAntialiasingEnabled) BOOL edgeAntialiasingEnabled;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgePadding;
- (void)captureSnapshotOfView:(id)a0 withSnapshotType:(int)a1;
- (void)_positionImageView;
- (void)setContentStretch:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateContentsRect;
- (void)_addEdgePaddingViewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawEdges:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 withContentSize:(struct CGSize { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentsCenterForEdgePadding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 withContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)layoutSubviews;
- (void)captureSnapshotRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1 withSnapshotType:(int)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
