@class UIFont, NSString, NSArray, UIImageView, UIView, MTVisualStylingProvider;

@interface FCUIOptionsControl : UIControl <UIPointerInteractionDelegate, FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring> {
    UIView *_backgroundView;
    UIImageView *_glyphView;
    MTVisualStylingProvider *_glyphVisualStylingProvider;
    UIFont *_referenceFont;
    double _referencePointSize;
    double _maxPointSize;
}

@property (nonatomic) long long controlType;
@property (nonatomic, getter=isParentControlHighlighted) BOOL parentControlHighlighted;
@property (nonatomic, getter=isParentControlSelected) BOOL parentControlSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

- (void)_updateTextAttributes;
- (id)initWithReferencePointSize:(double)a0 maximumPointSize:(double)a1;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributesIfNecessary;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)_needsTextAttributesUpdate;
- (void)setSelected:(BOOL)a0;
- (double)_scaledValueForValue:(double)a0;
- (void)_configureBackgroundViewIfNecessary;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateVisualStylingOfView:(id)a0 style:(long long)a1 visualStylingProvider:(id)a2 outgoingProvider:(id)a3;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setGlyphVisualStylingProvider:(id)a0;
- (void)setTintColor:(id)a0;
- (long long)_glyphViewVisualStyleForCurrentState;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (id)_glyphImageNameForCurrentStateWithControlType:(long long)a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_configureGlyphViewIfNecessary;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;

@end
