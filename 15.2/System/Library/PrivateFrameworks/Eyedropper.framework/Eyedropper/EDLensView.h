@class NSString, CADisplayLink, EDGridView, UIView, EDColorAnalyzer, UIPointerInteraction;
@protocol EDLensViewDelegate;

@interface EDLensView : UIView <UIDragInteractionDelegate, UIPointerInteractionDelegate> {
    UIView *_hoverColorCenterView;
    UIView *_hoverColorRingView;
    EDGridView *_gridView;
    UIView *_screenshotSurfaceView;
    UIView *_ringBorderView;
    long long _lensState;
    CADisplayLink *_displayLink;
    EDColorAnalyzer *_colorAnalyzer;
    BOOL _shouldChangeAlphaWhenDismissing;
    struct EDColor { double r; double g; double b; } _hoverColor;
    double _hoverColorBrightness;
    struct CGPoint { double x; double y; } _centerOffsetAtTouchDown;
    UIPointerInteraction *_pointerInteraction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EDLensViewDelegate> delegate;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) BOOL floatingMode;
@property (nonatomic) struct CGPoint { double x; double y; } lastPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)dismiss;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (unsigned long long)accessibilityTraits;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (void)_displayLinkFired;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)accessibilityLabel;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (long long)_lensPosition;
- (void)updateCenterOffsetAtTouchDown:(struct CGPoint { double x0; double x1; })a0;
- (void)presentAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateLensViewWithEvent:(id)a0;
- (id)dragItemsForInteraction:(id)a0;
- (void)updateLensState:(long long)a0;
- (void)tappedCenter:(id)a0;
- (void)_layoutStaticElements;
- (void)_dismissAndRemoveAlpha:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })_lensViewLocalCenter;
- (BOOL)_isScreenScaleEven;

@end
