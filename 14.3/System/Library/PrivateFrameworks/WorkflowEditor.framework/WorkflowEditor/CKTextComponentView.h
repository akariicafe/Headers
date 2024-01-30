@class CKTextKitRenderer, CKTextComponentViewControlTracker, CKTextComponentLayer;

@interface CKTextComponentView : UIControl {
    CKTextComponentViewControlTracker *_controlTracker;
}

@property (readonly, nonatomic) CKTextComponentLayer *textLayer;
@property (readonly, nonatomic) CKTextComponentViewControlTracker *controlTracker;
@property (retain, nonatomic) CKTextKitRenderer *renderer;

+ (Class)layerClass;

- (void)cancelTrackingWithEvent:(id)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)isAccessibilityElement;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)accessibilityAttributedLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)traitCollectionDidChange:(id)a0;

@end
