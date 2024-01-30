@class UIKBTextStyle, UIKBRenderGeometry, NSArray, NSString, NSMutableArray, UIKBGradient;

@interface UIKBRenderTraits : NSObject <NSCopying> {
    BOOL _honorControlOpacity;
}

@property (retain, nonatomic) UIKBRenderGeometry *geometry;
@property (retain, nonatomic) UIKBGradient *backgroundGradient;
@property (retain, nonatomic) UIKBGradient *layeredBackgroundGradient;
@property (retain, nonatomic) UIKBGradient *layeredForegroundGradient;
@property (retain, nonatomic) UIKBTextStyle *symbolStyle;
@property (retain, nonatomic) UIKBTextStyle *fallbackSymbolStyle;
@property (retain, nonatomic) NSArray *secondarySymbolStyles;
@property (readonly, nonatomic) NSMutableArray *renderEffects;
@property (readonly, nonatomic) NSMutableArray *foregroundRenderEffects;
@property (retain, nonatomic) NSArray *variantGeometries;
@property (retain, nonatomic) UIKBRenderTraits *variantTraits;
@property (retain, nonatomic) UIKBRenderTraits *highlightedVariantTraits;
@property (nonatomic) BOOL controlOpacities;
@property (nonatomic) BOOL blurBlending;
@property (nonatomic) long long blendForm;
@property (retain, nonatomic) NSArray *renderFlags;
@property (nonatomic) BOOL renderSecondarySymbolsSeparately;
@property (nonatomic) long long renderFlagsForAboveEffects;
@property (retain, nonatomic) NSString *hashString;
@property (nonatomic) BOOL usesDarkAppearance;
@property (nonatomic) double floatingContentViewCornerRadius;
@property (nonatomic) struct CGSize { double width; double height; } floatingContentViewFocusedIncreaseSize;
@property (nonatomic) double floatingContentViewShadowVerticalOffset;
@property (nonatomic) double floatingContentViewShadowRadius;
@property (nonatomic) double floatingContentViewShadowOpacity;

+ (id)emptyTraits;
+ (id)traitsWithGeometry:(id)a0;
+ (id)traitsWithSymbolStyle:(id)a0;

- (void)addForegroundRenderEffect:(id)a0;
- (void)addRenderEffect:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)overlayWithTraits:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)modifyForMasking;
- (id)description;
- (void)removeAllRenderEffects;
- (void).cxx_destruct;

@end
