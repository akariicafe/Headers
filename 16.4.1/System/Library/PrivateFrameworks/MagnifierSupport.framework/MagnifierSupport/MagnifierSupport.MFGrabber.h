@interface MagnifierSupport.MFGrabber : UIView {
    void /* unknown type, empty encoding */ backgroundView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilityUseAccessibilityFrameForHittest;

@end
