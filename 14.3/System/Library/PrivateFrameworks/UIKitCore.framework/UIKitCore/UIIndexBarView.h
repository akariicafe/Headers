@class UIColor, UISelectionFeedbackGenerator, NSArray, NSString, UIAccessibilityHUDGestureManager;
@protocol UIIndexBarViewDelegate, UIIndexBarVisualStyle;

@interface UIIndexBarView : UIControl <UIAccessibilityHUDGestureDelegate>

@property (nonatomic) double cachedDisplayHighlightedIndex;
@property (copy, nonatomic) UIColor *nonTrackingBackgroundColor;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIAccessibilityHUDGestureManager *axHUDGestureManager;
@property (retain, nonatomic) id<UIIndexBarVisualStyle> visualStyle;
@property (retain, nonatomic) NSArray *displayEntries;
@property (readonly, nonatomic) double displayHighlightedIndex;
@property (copy, nonatomic) NSArray *entries;
@property (weak, nonatomic) id<UIIndexBarViewDelegate> delegate;
@property (copy, nonatomic) UIColor *indexColor;
@property (copy, nonatomic) UIColor *trackingBackgroundColor;
@property (nonatomic) long long highlightStyle;
@property (nonatomic) double highlightedIndex;
@property (nonatomic) double deflection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBecomeFocused;
- (void)cancelTrackingWithEvent:(id)a0;
- (id)_accessibilityHUDGestureManager:(id)a0 HUDItemForPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_accessibilityHUDGestureManager:(id)a0 gestureLiftedAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)resetDeflection:(BOOL)a0;
- (BOOL)_canDrawContent;
- (BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)a0;
- (void)_setupAXHUDGestureIfNecessary;
- (void)_updateBackgroundColor;
- (void)setBackgroundColor:(id)a0;
- (void)didMoveToWindow;
- (BOOL)_selectEntry:(id)a0 atIndex:(long long)a1;
- (void)layoutSubviews;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_largeContentViewerEnabledStatusDidChange:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)_accessibilityHUDGestureManager:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateDisplayEntries;
- (void)_userInteractionStarted;
- (void)_userInteractionStopped;
- (BOOL)_defaultCanBecomeFocused;
- (BOOL)_didSelectEntry:(id)a0 atIndex:(long long)a1;

@end
