@class UIFont, NSArray, UIColor, NSString, UIAccessibilityHUDGestureManager;

@interface UITableViewIndex : UIControl <UIAccessibilityHUDGestureDelegate> {
    NSArray *_titles;
    UIFont *_font;
    struct CGSize { double width; double height; } _cachedSize;
    struct CGSize { double width; double height; } _cachedSizeToFit;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
    UIColor *_indexTrackingBackgroundColor;
    double _topPadding;
    double _bottomPadding;
    double _verticalTextHeightEstimate;
    NSArray *_entries;
    long long _idiom;
    UIAccessibilityHUDGestureManager *_axHUDGestureManager;
}

@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } drawingInsets;
@property (retain, nonatomic) UIColor *indexColor;
@property (retain, nonatomic) UIColor *indexBackgroundColor;
@property (retain, nonatomic) UIColor *indexTrackingBackgroundColor;
@property (readonly, nonatomic) long long selectedSection;
@property (readonly, nonatomic) NSString *selectedSectionTitle;
@property (readonly, nonatomic) BOOL pastTop;
@property (readonly, nonatomic) BOOL pastBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_fontForIdiom:(long long)a0;
- (BOOL)canBecomeFocused;
- (void)cancelTrackingWithEvent:(id)a0;
- (id)_accessibilityHUDGestureManager:(id)a0 HUDItemForPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_accessibilityHUDGestureManager:(id)a0 gestureLiftedAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)_updateSectionForTouch:(id)a0 withEvent:(id)a1;
- (void)_setIdiom:(long long)a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)_externalDotImage;
- (void)tintColorDidChange;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectiveBounds;
- (long long)_idiom;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)a0;
- (unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)a0;
- (void)_cacheAndMeasureTitles;
- (void)_setupAXHUDGestureIfNecessary;
- (void)_willChangeToIdiom:(long long)a0 onScreen:(id)a1;
- (double)_minLineSpacingForIdiom:(long long)a0;
- (void)didMoveToWindow;
- (id)_dotImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)_indexForEntryAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_largeContentViewerEnabledStatusDidChange:(id)a0;
- (id)_displayTitles;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stride:(double *)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)_accessibilityHUDGestureManager:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
