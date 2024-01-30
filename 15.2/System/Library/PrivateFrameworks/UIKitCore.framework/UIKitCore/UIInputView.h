@class CALayer, NSMutableDictionary, NSString, UIImage, UIKBRenderConfig, _UIInputViewContent, NSArray;

@interface UIInputView : UIView <UISplittableInputView> {
    UIKBRenderConfig *_renderConfig;
    BOOL _suppressBackgroundStyling;
    BOOL _disableSplitSupport;
    double _gapWidth;
    double _leftOffset;
    BOOL _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    double _transitionRatio;
    NSArray *_visibleLayers;
    CALayer *_transitionLayer;
}

@property (retain, nonatomic) UIImage *_mergedImage;
@property (retain, nonatomic) UIImage *_splitImage;
@property (retain, nonatomic) NSMutableDictionary *_mergedSliceMap;
@property (retain, nonatomic) NSMutableDictionary *_splitSliceMap;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } backgroundEdgeInsets;
@property (nonatomic) BOOL assertSizingWithPredictionBar;
@property (readonly, nonatomic) _UIInputViewContent *leftContentView;
@property (readonly, nonatomic) _UIInputViewContent *rightContentView;
@property (nonatomic) double contentRatio;
@property (nonatomic) struct CGSize { double width; double height; } leftContentViewSize;
@property (nonatomic) struct CGSize { double width; double height; } rightContentViewSize;
@property (readonly, nonatomic) long long inputViewStyle;
@property (nonatomic) BOOL allowsSelfSizing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_setupAppearanceIfNecessary;

- (void)_setRenderConfig:(id)a0;
- (BOOL)_isTransitioning;
- (void)_endSplitTransitionIfNeeded:(BOOL)a0;
- (void)_beginSplitTransitionIfNeeded:(double)a0 gapWidth:(double)a1;
- (BOOL)_isSplit;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isToolbars;
- (unsigned long long)_clipCornersOfView:(id)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)tintColor;
- (void)_setProgress:(double)a0 boundedBy:(double)a1;
- (BOOL)_supportsSplit;
- (void)_setNeedsContentSizeUpdate;
- (double)_additionalClipHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputViewStyle:(long long)a1;
- (void)_updateClipCorners;
- (void)_updateWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setDisableSplitSupport:(BOOL)a0;
- (id)_splitBorderedBackgroundWithCorners:(unsigned long long)a0;
- (BOOL)_disableSplitSupport;
- (id)_toolbarBorderedBackground;
- (BOOL)_suppressBackgroundStyling;
- (void)_setSuppressBackgroundStyling:(BOOL)a0;
- (void)setInputViewStyle:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutMergedSubviews;
- (struct CGSize { double x0; double x1; })_defaultSize;
- (void)updateMergedSubviewConstraints;
- (void)dealloc;
- (void)willBeginSplitTransition;
- (void)_setLeftOffset:(double)a0 gapWidth:(double)a1;
- (void)didEndSplitTransition;
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize { double x0; double x1; })a0 rightContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize { double x0; double x1; })a0 rightContentSize:(struct CGSize { double x0; double x1; })a1;

@end
