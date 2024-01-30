@class NSNumberFormatter, UIImageView, UIView, CAMZoomFactorLabel;
@protocol CAMZoomButtonDelegate;

@interface CAMZoomButton : UIControl

@property (class, readonly, nonatomic) BOOL _useOutline;
@property (class, readonly, nonatomic) NSNumberFormatter *zoomFactorFormatter;

@property (readonly, nonatomic) UIView *_contentContainerView;
@property (readonly, nonatomic) CAMZoomFactorLabel *_zoomFactorLabel;
@property (readonly, nonatomic) UIImageView *_zoomSymbolView;
@property (readonly, nonatomic) UIImageView *_circleImageView;
@property (readonly, nonatomic) UIImageView *_backgroundImageView;
@property (nonatomic, setter=_setHighlightingTransform:) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } highlightingTransform;
@property (retain, nonatomic) UIImageView *_accessoryBackgroundView;
@property (retain, nonatomic) UIImageView *_accessoryImageView;
@property (weak, nonatomic) id<CAMZoomButtonDelegate> delegate;
@property (nonatomic) long long contentType;
@property (nonatomic) double zoomFactor;
@property (nonatomic) long long zoomSymbol;
@property (nonatomic) long long accessoryState;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessoryFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tappableEdgeInsets;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL shouldHideBackground;
@property (nonatomic, getter=isOverPlatter) BOOL overPlatter;
@property (nonatomic) BOOL abbreviateAndEnlargeText;
@property (nonatomic) BOOL useLeadingZero;

+ (double)fontSizeForContentSize:(id)a0;
+ (double)circleDiameterForContentSize:(id)a0;
+ (id)textForZoomFactor:(double)a0 showZoomFactorSymbol:(BOOL)a1 useLeadingZero:(BOOL)a2;
+ (id)textForZoomFactor:(double)a0 showZoomFactorSymbol:(BOOL)a1;
+ (BOOL)shouldUseLargeButtonSizeForContentSize:(id)a0;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (id)_createBackgroundImageForContentSize:(id)a0;
- (void)_updateAccessoryAlphas;
- (id)_imageForZoomSymbol:(long long)a0;
- (void)_performHighlightAnimation;
- (id)_createCircleImageForContentSize:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithCoder:(id)a0;
- (void)_updateAccessoryBackgroundView;
- (id)_createBackgroundImageForContentSize:(id)a0 color:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForEnlargeText:(BOOL)a0 orientation:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setShouldHideBackground:(BOOL)a0 animationDuration:(double)a1;
- (void)tintColorDidChange;
- (void)_updateZoomSymbolViewAnimated:(BOOL)a0;
- (void)_createZoomSymbolViewIfNecessary;
- (void)_updateForContentSize;
- (void)layoutSubviews;
- (void)_commonCAMZoomButtonInitialization;
- (void)traitCollectionDidChange:(id)a0;
- (void)setAccessoryState:(long long)a0 animated:(BOOL)a1;
- (void)setContentType:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (double)_circleLineWidthForContentSize:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_highlightingTransformForHighlighted:(BOOL)a0;
- (void)_updateBackgroundImageViewAlpha;
- (void)_updateZoomFactorLabel;
- (double)_backgroundImageDiameterForContentSize:(id)a0;
- (void)setZoomSymbol:(long long)a0 animated:(BOOL)a1;

@end
