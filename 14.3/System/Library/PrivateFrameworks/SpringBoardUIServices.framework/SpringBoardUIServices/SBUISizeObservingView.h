@protocol SBUISizeObservingViewDelegate;

@interface SBUISizeObservingView : SBFView {
    BOOL _delegateInterestedInSizeChanges;
}

@property (weak, nonatomic) id<SBUISizeObservingViewDelegate> delegate;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
