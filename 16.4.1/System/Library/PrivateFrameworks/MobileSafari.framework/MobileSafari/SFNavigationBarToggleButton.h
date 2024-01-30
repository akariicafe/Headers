@class UIView, NSString, UIImage, UIImageView, SFToggleBackgroundView, UIImageSymbolConfiguration, UIPointerInteraction, UIColor;

@interface SFNavigationBarToggleButton : SFClickableButton <UIPointerInteractionDelegate> {
    BOOL _liftedForCursor;
    UIImageView *_defaultStateImageView;
    UIImageView *_selectedStateImageView;
    UIImageView *_secondaryImageView;
    UIImageView *_tertiaryImageView;
    SFToggleBackgroundView *_selectedStateMaskView;
    UIView *_selectedStateFillView;
    UIView *_badgeView;
    unsigned long long _inputMode;
}

@property (class, readonly, nonatomic) UIImage *formatMenuImage;
@property (class, readonly, nonatomic) UIImage *readerImage;
@property (class, readonly, nonatomic) UIImage *translationImage;
@property (class, readonly, nonatomic) UIImage *extensionsImage;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } glyphSize;

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *secondaryImage;
@property (retain, nonatomic) UIColor *secondaryImageColor;
@property (retain, nonatomic) UIImage *tertiaryImage;
@property (retain, nonatomic) UIColor *tertiaryImageColor;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) double minimumSideMargin;
@property (nonatomic) BOOL showsBadge;
@property (nonatomic) BOOL drawsLightGlyph;
@property (nonatomic) double resizableBackgroundCornerRadius;
@property (nonatomic) long long cornerRoundingMode;
@property (nonatomic) double insetFromBackground;
@property (nonatomic) BOOL usesInsetFromBackground;
@property (retain, nonatomic) UIColor *glyphTintColor;
@property (nonatomic) BOOL highlightsBackground;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (readonly, nonatomic) UIPointerInteraction *pointerInteraction;
@property (weak, nonatomic) UIView *pointerPreviewContainer;
@property (retain, nonatomic) UIView *tiplessPopoverSourceView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setSelected:(BOOL)a0;
- (id)initWithImage:(id)a0 forInputMode:(unsigned long long)a1;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;

@end
