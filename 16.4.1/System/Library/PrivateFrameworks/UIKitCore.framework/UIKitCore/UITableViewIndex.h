@class UIFont, NSArray, UIColor, NSString, UIAccessibilityHUDGestureManager;
@protocol UITableViewIndexVisualStyle;

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
@property (retain, nonatomic) id<UITableViewIndexVisualStyle> visualStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerVisualStyle:(Class)a0 forIdiom:(long long)a1;
+ (void)makeTableViewIndex:(id *)a0 containerView:(id *)a1 forTraits:(id)a2;
+ (id)visualStyleForTableViewIndex:(id)a0;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFocused;
- (BOOL)_accessibilityHUDGestureManager:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cancelTrackingWithEvent:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)_accessibilityHUDGestureManager:(id)a0 HUDItemForPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_accessibilityHUDGestureManager:(id)a0 gestureLiftedAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)a0;
- (void)_cacheAndMeasureTitles;
- (long long)_coreIdiom;
- (id)_displayTitles;
- (id)_dotImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_effectiveBounds;
- (id)_externalDotImage;
- (void)_handleTouches:(id)a0 withEvent:(id)a1;
- (long long)_idiom;
- (long long)_indexForEntryAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_largeContentViewerEnabledStatusDidChange:(id)a0;
- (double)_minLineSpacingForIdiom:(long long)a0;
- (void)_setIdiom:(long long)a0;
- (void)_setupAXHUDGestureIfNecessary;
- (BOOL)_updateSectionForTouch:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBoundsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stride:(double *)a1;
- (void)_willChangeToIdiom:(long long)a0 onScreen:(id)a1;
- (unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)a0;

@end
