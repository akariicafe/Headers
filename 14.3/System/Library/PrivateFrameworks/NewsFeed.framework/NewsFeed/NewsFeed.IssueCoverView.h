@interface NewsFeed.IssueCoverView : UIView <TUMotionManagerObserver> {
    void /* unknown type, empty encoding */ staticContentView;
    void /* unknown type, empty encoding */ dynamicContentView;
    void /* unknown type, empty encoding */ dynamicView;
    void /* unknown type, empty encoding */ backgroundLayer;
    void /* unknown type, empty encoding */ shadowView;
    void /* unknown type, empty encoding */ shadowMotionLayer;
    void /* unknown type, empty encoding */ observingMotion;
    void /* unknown type, empty encoding */ identifier;
}

- (void)motionManager:(id)a0 didUpdateMotionData:(id)a1;
- (void)motionManager:(id)a0 motionEnabled:(BOOL)a1;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (id)initWithCoder:(id)a0;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
