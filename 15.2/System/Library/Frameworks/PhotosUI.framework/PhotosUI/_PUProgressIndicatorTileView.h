@class UIView;
@protocol _PUProgressIndicatorTileViewDelegate;

@interface _PUProgressIndicatorTileView : UIView {
    struct { BOOL respondsToDidChangeTraitCollection; } _delegateFlags;
}

@property (weak, nonatomic) UIView *extraHittableSubview;
@property (weak, nonatomic) id<_PUProgressIndicatorTileViewDelegate> traitCollectionDelegate;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
