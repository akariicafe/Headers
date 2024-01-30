@class _UILegibilitySettings, NSArray, NSString, UITapGestureRecognizer;
@protocol SBIconListPageControlDelegate;

@interface SBIconListPageControl : UIPageControl <UIGestureRecognizerDelegate> {
    double _cachedDefaultHeight;
}

@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, getter=isScrubbing) BOOL scrubbing;
@property (weak, nonatomic) id<SBIconListPageControlDelegate> delegate;
@property (readonly, nonatomic) double defaultHeight;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSArray *touchIgnoreRects;
@property (nonatomic) BOOL actsAsButton;
@property (readonly, nonatomic, getter=isEffectivelyVisible) BOOL effectivelyVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)cancelTapGesture;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)pageControlCurrentPageDidChange:(id)a0;
- (void)legibilitySettingsDidChange;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setButtonHighlighted:(BOOL)a0;
- (void)tapGestureDidUpdate:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;

@end
