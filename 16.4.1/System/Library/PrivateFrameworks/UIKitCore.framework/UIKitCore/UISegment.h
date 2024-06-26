@class UIView, NSString, NSArray, _UIBadgeView, UIImageView, UIAction, _UISegmentedControlAppearanceStorage, _UIFloatingContentView;
@protocol UISegmentBezelView;

@interface UISegment : UIImageView <CAAnimationDelegate, UISegmentProtocol> {
    UIView *_info;
    UIImageView *_backgroundView;
    UIView *_selectionIndicatorView;
    UIImageView *_selectionImageView;
    UIView<UISegmentBezelView> *_bezelView;
    _UISegmentedControlAppearanceStorage *_appearanceStorage;
    _UIFloatingContentView *_floatingContentView;
    double _width;
    struct CGSize { double width; double height; } _contentOffset;
    long long _barStyle;
    unsigned long long _rightSegmentState;
    NSString *_badgeValue;
    _UIBadgeView *_badgeView;
    id _objectValue;
    struct { unsigned char size : 2; unsigned char selected : 1; unsigned char highlighted : 1; unsigned char showDivider : 1; unsigned char hasImage : 1; unsigned char position : 3; unsigned char autosizeText : 1; unsigned char isMomentary : 1; unsigned char wasSelected : 1; unsigned char needsBackgroundAndContentViewUpdate : 1; unsigned char usesAXTextSize : 1; unsigned char selectionIndicatorDragged : 1; unsigned char adjustsForContentSizeCategory : 1; unsigned char hovered : 1; unsigned char animatingSelectionIndicator : 1; } _segmentFlags;
}

@property (copy, nonatomic, setter=_setInfoConstraints:) NSArray *_infoConstraints;
@property (copy, nonatomic) UIAction *action;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic, getter=isMomentary) BOOL momentary;
@property (copy, nonatomic) NSString *badgeValue;
@property (readonly) UIView *badgeView;
@property (nonatomic) double requestedScaleFactor;
@property (nonatomic) unsigned int segmentPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isRightSelected) BOOL rightSelected;
@property (readonly, nonatomic, getter=isRightHighlighted) BOOL rightHighlighted;
@property (readonly, nonatomic) int controlSize;

+ (id)_backgroundImageWithStorage:(id)a0 mini:(BOOL)a1 state:(unsigned long long)a2 position:(unsigned int)a3 drawMode:(unsigned int *)a4 isCustom:(BOOL *)a5 defaultBlock:(id /* block */)a6;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setHovered:(BOOL)a0;
- (void)setWasSelected:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (void)_insertSelectionView;
- (id)objectValue;
- (void)encodeWithCoder:(id)a0;
- (void)setControlSize:(int)a0;
- (BOOL)_effectiveDisableShadow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (void)animateAdd:(BOOL)a0;
- (void)_updateHighlight;
- (BOOL)isSelectionIndicatorDragged;
- (id)_encodableSubviews;
- (id)_effectiveBackgroundTintColor;
- (id)disabledTextColor;
- (void)removeFromSuperview;
- (id)_effectiveBackgroundView;
- (void)updateMasking;
- (void)setBarStyle:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)_positionInfo;
- (void)updateForAppearance:(id)a0;
- (id)focusEffect;
- (void)_populateArchivedSubviews:(id)a0;
- (void)_updateDynamicShadow:(BOOL)a0 animated:(BOOL)a1;
- (void)setAutosizeText:(BOOL)a0;
- (BOOL)useBlockyMagnificationInClassic;
- (id)_dividerImageIsCustom:(BOOL *)a0;
- (BOOL)isAnimatingSelectionIndicator;
- (BOOL)isHovered;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_highlightSelectionInfoTransform;
- (unsigned long long)_segmentState;
- (void)_positionInfoWithoutAnimation;
- (double)_idealWidth;
- (void)_updateFloatingContentControlState:(unsigned long long)a0 context:(id)a1 withAnimationCoordinator:(id)a2 animated:(BOOL)a3;
- (double)_barHeight;
- (void)setUsesAXTextSize:(BOOL)a0;
- (id)_floatingContentView;
- (void)setHighlighted:(BOOL)a0;
- (void)_updateTextColors;
- (id)_effectiveContentView;
- (BOOL)canBecomeFocused;
- (void)_setSelectionIndicatorDragged:(BOOL)a0 animated:(BOOL)a1;
- (BOOL)showDivider;
- (struct CGSize { double x0; double x1; })_maximumTextSize;
- (void)setTintColor:(id)a0;
- (id)_effectiveSelectedSegmentTintColor;
- (id)viewForLastBaselineLayout;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_paddingInsets;
- (void)tintColorDidChange;
- (void)_removeSelectionIndicator;
- (void)setAnimatingSelectionIndicator:(BOOL)a0;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)setObjectValue:(id)a0;
- (void)setShowDivider:(BOOL)a0;
- (void)dealloc;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)_isContainedInHostedFocusSystem;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertDividerView;
- (void)_updateSelectionIndicator;
- (void)setAdjustsForContentSizeCategory:(BOOL)a0;
- (void)layoutSubviews;
- (void)updateDividerViewForChangedSegment:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0 highlighted:(BOOL)a1;
- (void)updateConstraints;
- (void)setSelectionIndicatorDragged:(BOOL)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)_updateSelectionToTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0 infoTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a1 hideSelection:(BOOL)a2 shouldAnimate:(BOOL)a3;
- (id)_stateTextAttibutes:(id)a0 segmentState:(unsigned long long)a1;
- (id)_effectiveVibrancyEffect;
- (void)setContentOffset:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setNeedsBackgroundAndContentViewUpdate;
- (id)_parentSegmentedControl;
- (void)animateRemoveForWidth:(double)a0;
- (id)initWithInfo:(id)a0 size:(int)a1 barStyle:(long long)a2 tintColor:(id)a3 appearanceStorage:(id)a4 position:(unsigned int)a5 autosizeText:(BOOL)a6 adjustsForContentSizeCategory:(BOOL)a7 traitCollection:(id)a8;
- (BOOL)_hasSelectedColor;
- (id)label;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)_finishInitialSegmentSetup;
- (id)_dividerImage;
- (Class)_segmentedControlClass;
- (id)_preferredConfigurationForFocusAnimation:(long long)a0 inContext:(id)a1;
- (id)_tintColorArchivingKey;
- (void)_updateBackgroundAndContentViews;
- (id)_attributedTextForState:(unsigned long long)a0 selected:(BOOL)a1 forceSelectedAppearance:(BOOL)a2;
- (BOOL)_effectiveUseDynamicShadow;
- (void)_forceInfoDisplay;
- (void)_setEnabledAppearance:(BOOL)a0;
- (void).cxx_destruct;
- (void)_invalidateInfoConstraints;
- (id)_segmentLabel;
- (void)_updateBackgroundAndContentViewsIfNeeded;

@end
