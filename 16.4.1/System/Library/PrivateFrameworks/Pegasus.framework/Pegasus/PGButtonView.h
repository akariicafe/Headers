@class UIColor, NSString, UIFont, _PGButton, UIViewPropertyAnimator, UIPointerInteraction, UIImage;
@protocol PGButtonViewDelegate, BSInvalidatable;

@interface PGButtonView : PGMaterialView <UIPointerInteractionDelegate> {
    double _currentGlyphSize;
    NSString *_currentGlyphImageName;
    UIImage *_currentCustomImage;
    id<BSInvalidatable> _preventAutoHideOfControlsAssertion;
}

@property (class, readonly, nonatomic) UIColor *disabledTintColor;

@property (retain, nonatomic) _PGButton *actualButton;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (weak, nonatomic) UIViewPropertyAnimator *highlightAnimator;
@property (weak, nonatomic) UIPointerInteraction *pointerInteraction;
@property (weak, nonatomic) id<PGButtonViewDelegate> delegate;
@property (copy, nonatomic) NSString *systemImageName;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, getter=isCircular) BOOL circular;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double glyphSize;
@property (readonly, nonatomic) UIColor *enabledTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (id)buttonWithDelegate:(id)a0;

- (void)sizeToFit;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)accessibilityIdentifier;
- (void)didMoveToWindow;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setAccessibilityIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_handleTouchDown:(id)a0;
- (void)_handleTouchUpInside:(id)a0;
- (void)_handleDragEnter:(id)a0;
- (void)_handleDragExit:(id)a0;
- (void)_handleTouchUpOrCancel:(id)a0;
- (BOOL)_shouldHitTest;
- (void)_updateForCircularAppearanceIfNeeded;
- (void)_updateGlyphConfigurationIfNeeded;

@end
