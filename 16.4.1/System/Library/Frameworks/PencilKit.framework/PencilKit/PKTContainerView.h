@protocol PKTextInputContainerViewDelegate;

@interface PKTContainerView : UIView {
    id<PKTextInputContainerViewDelegate> _delegate;
}

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
