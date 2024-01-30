@protocol PXLivePhotoBadgeViewDelegate;

@interface PXLivePhotoBadgeView : UIView {
    struct { BOOL wantsPlayback; } _delegateRespondsTo;
    struct CGSize { double width; double height; } _size;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackedRect;
@property (weak, nonatomic) id<PXLivePhotoBadgeViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setUpContent;
- (void)setWantsPlayback:(BOOL)a0;

@end
