@protocol NTKContainerViewLayoutDelegate;

@interface NTKContainerView : UIView {
    struct { unsigned char layoutContainerView : 1; } _delegateRespondsTo;
}

@property (weak, nonatomic) id<NTKContainerViewLayoutDelegate> layoutDelegate;

- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
