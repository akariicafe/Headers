@protocol AXRVoiceOverTouchPadViewDelegate;

@interface AXRVoiceOverTouchPadView : UIView

@property (weak, nonatomic) id<AXRVoiceOverTouchPadViewDelegate> delegate;

- (id)accessibilityLabel;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityGesturePracticeRegion;
- (void)_accessibilitySetCurrentGesture:(id)a0;

@end
