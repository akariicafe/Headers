@class __end_, NSString, CABackdropLayer, UIView, __end_cap_, LAUIPearlGlyphView, UIFont, NSObject, UILabel, UIColor;
@protocol OS_dispatch_source;

@interface LAUIPearlGlyphLabel : UIView {
    UIView *_container;
    CABackdropLayer *_background;
    UIView *_labelContainer;
    UILabel *_label;
    UIView *_glyphContainer;
    LAUIPearlGlyphView *_glyph;
    struct map<CALayer *__unsafe_unretained, CALayer *, std::less<CALayer *__unsafe_unretained>, std::allocator<std::pair<CALayer *const __unsafe_unretained, CALayer *>>> { struct __tree<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>, std::allocator<std::__value_type<CALayer *__unsafe_unretained, CALayer *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<CALayer *__unsafe_unretained, CALayer *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<CALayer *__unsafe_unretained, std::__value_type<CALayer *__unsafe_unretained, CALayer *>, std::less<CALayer *__unsafe_unretained>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _masks;
    struct vector<UIView *, std::allocator<UIView *>> { __end_ **__begin_; __end_cap_ **x0; struct __compressed_pair<UIView *__strong *, std::allocator<UIView *>> { id *__value_; } x1; } _labelSnapshots;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIFont *_baseFont;
    struct CGSize { double width; double height; } _currentLabelSize;
    struct CGSize { double width; double height; } _currentMaximumSize;
    NSObject<OS_dispatch_source> *_visibilityTimer;
    BOOL _inWindow;
    BOOL _textNeedsUpdate;
    BOOL _textUpdateNeedsAnimation;
    BOOL _visible;
    BOOL _visibleNeedsUpdate;
    BOOL _allowDelayedVisibility;
    BOOL _animated;
    BOOL _reduceBlur;
}

@property (nonatomic) BOOL inApplicationContext;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic, getter=isShimmerEnabled) BOOL shimmerEnabled;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumSize;

- (void)_updateText;
- (void)layoutSubviews;
- (void)applicationDidBecomeActive:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setStyle:(long long)a0 animated:(BOOL)a1;
- (void)invalidate;
- (void)dealloc;
- (void)didMoveToWindow;
- (id).cxx_construct;
- (void)_updateVisibilityAnimated:(BOOL)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void)setInApplicationContext:(BOOL)a0;
- (BOOL)inApplicationContext;
- (void)_applyStyle;
- (void)reduceTransparencyDidChange:(id)a0;
- (void)reduceMotionDidChange:(id)a0;
- (void)boldTextStatusDidChange:(id)a0;
- (void)_updateFontAnimated:(BOOL)a0;
- (void)_applyVisibilityAnimated:(BOOL)a0;
- (void)_updateGlyphPaused;
- (void)_updateBoundsSizeAnimated:(BOOL)a0;
- (void)_updateReduceBlurState;
- (void)setShimmerEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setText:(id)a0 animated:(BOOL)a1;
- (void)setMaximumSize:(struct CGSize { double x0; double x1; })a0 animated:(BOOL)a1;

@end
