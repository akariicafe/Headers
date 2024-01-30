@class UIColor, UICellConfigurationState;

@interface HUTileCell : UICollectionViewCell <HUDragItemConfiguring, HUQuickControlPresentationTransitionDelegate, HUTileCellProtocol, HUReorderableCellProtocol> {
    void /* unknown type, empty encoding */ borderStyle;
    void /* unknown type, empty encoding */ overrideLayout;
    void /* unknown type, empty encoding */ _gridSize;
}

@property (class, nonatomic, readonly) double minimumDescriptionScaleFactor;

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ item;
@property (nonatomic) void /* unknown type, empty encoding */ showPrefixLabel;
@property (nonatomic) void /* unknown type, empty encoding */ toggleable;
@property (nonatomic) void /* unknown type, empty encoding */ useMutedIconOffColors;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundEffectGrouper;
@property (nonatomic) void /* unknown type, empty encoding */ backgroundDisplayStyle;
@property (nonatomic) struct HUGridSize { long long x0; long long x1; } gridSize;
@property (nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;
@property (nonatomic) void /* unknown type, empty encoding */ rearranging;
@property (nonatomic) void /* unknown type, empty encoding */ reorderable;

- (void)configureDragItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)backgroundCornerRadius;
- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;
- (id)primaryString;
- (id)secondaryLabelFont;
- (id)secondaryString;
- (id)primaryLabelFont;
- (id)prefixString;
- (id)prefixLabelFont;
- (void)animateIconTouchDown;
- (void)animateIconTouchUp;
- (id)baseIconViewConfiguration;
- (id)createBackgroundBlurView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconViewTileFrame;
- (BOOL)isRearranging;
- (id)prefixLabelTextColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })prefixLabelTileFrame;
- (id)primaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })primaryLabelTileFrame;
- (BOOL)recognizeDoubleClickGesture;
- (void)resetToDefaultGridSize;
- (id)secondaryAttributedString;
- (id)secondaryLabelTextColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })secondaryLabelTileFrame;
- (id)tappableAreaForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tileFrame;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
