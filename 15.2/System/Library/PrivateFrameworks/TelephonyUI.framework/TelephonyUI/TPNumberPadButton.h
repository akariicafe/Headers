@class UIColor, TPRevealingRingView, NSString, CALayer, UIView;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol>

@property (class, readonly) BOOL isCarPlay;
@property (class, readonly, nonatomic) double verticalPadding;
@property (class, readonly, nonatomic) double horizontalPadding;
@property (class, readonly, nonatomic) double unhighlightedCircleViewAlpha;
@property (class, readonly, nonatomic) double highlightedCircleViewAlpha;

@property (retain) CALayer *glyphLayer;
@property (retain) CALayer *highlightedGlyphLayer;
@property (retain) UIView *circleView;
@property (readonly, nonatomic) UIColor *buttonColor;
@property (readonly, nonatomic) UIColor *highlightedButtonColor;
@property (readonly, nonatomic) TPRevealingRingView *revealingRingView;
@property (retain, nonatomic) UIColor *color;
@property long long character;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)resetLocale;
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingOutsideRing;
+ (double)outerCircleDiameter;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (id)imageForCharacter:(long long)a0 highlighted:(BOOL)a1 whiteVersion:(BOOL)a2;
+ (id)imageForCharacter:(long long)a0;
+ (id)imageForCharacter:(long long)a0 highlighted:(BOOL)a1;
+ (void)loadNumberPadKeyPrototypeView;
+ (void)resetLocaleIfNeeded;
+ (id)scriptKey;
+ (BOOL)usesBoldAssets;
+ (id)localizedLettersForCharacter:(long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circleBounds;
+ (BOOL)usesButtonSaturationFilters;
+ (id)disabledImageForCharacter:(long long)a0;

- (void)setHighlighted:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)touchDown;
- (void).cxx_destruct;
- (void)touchUp;
- (void)setGreyedOut:(BOOL)a0;
- (id)defaultColor;
- (id)initForCharacter:(long long)a0;
- (id)initForCharacter:(long long)a0 style:(long long)a1;
- (void)reloadImagesForCurrentCharacter;
- (void)touchCancelled;
- (void)highlightCircleView:(BOOL)a0 animated:(BOOL)a1;

@end
