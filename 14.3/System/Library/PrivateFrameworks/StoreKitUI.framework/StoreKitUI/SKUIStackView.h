@class UIImage, NSMutableArray, UIWindow;

@interface SKUIStackView : UIView {
    NSMutableArray *_stackViews;
    UIWindow *_window;
}

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) long long stackViewStyle;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)performCompressionAnimationWithCompletionHandler:(id /* block */)a0;
- (long long)_stackDepth;
- (id)_initSKUIStackView;
- (struct CGSize { double x0; double x1; })_sizeOfItemAtIndex:(double)a0;
- (struct UIOffset { double x0; double x1; })_relativeOffsetOfItemAtIndex:(long long)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (struct CGPoint { double x0; double x1; })_centerInPerspectiveTargetViewCoordinates;
- (struct CGSize { double x0; double x1; })_levelInsetSize;
- (struct CGSize { double x0; double x1; })_normalizedDistanceFromVanishingPointForCenter:(struct CGPoint { double x0; double x1; })a0 perspectiveTargetView:(id)a1;
- (struct UIOffset { double x0; double x1; })_relativeOffsetForMinimumRelativeOffset:(struct UIOffset { double x0; double x1; })a0 maximumRelativeOffset:(struct UIOffset { double x0; double x1; })a1 normalizedDistanceFromVanishingPoint:(struct CGSize { double x0; double x1; })a2;
- (id)initWithStackViewStyle:(long long)a0;

@end
