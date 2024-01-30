@class NSLocale;

@interface LNSnippetEnvironment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) long long dynamicTypeSize;
@property (readonly, nonatomic) long long legibilityWeight;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) long long colorScheme;
@property (readonly, nonatomic) long long colorSchemeContrast;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) long long displayGamut;
@property (readonly, nonatomic) BOOL accessibilityDifferentiateWithoutColor;
@property (readonly, nonatomic) BOOL accessibilityInvertColors;
@property (readonly, nonatomic) BOOL accessibilityReduceMotion;
@property (readonly, nonatomic) BOOL accessibilityReduceTransparency;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 locale:(id)a1 dynamicTypeSize:(long long)a2 legibilityWeight:(long long)a3 layoutDirection:(long long)a4 colorScheme:(long long)a5 colorSchemeContrast:(long long)a6 displayScale:(double)a7 displayGamut:(long long)a8 accessibilityDifferentiateWithoutColor:(BOOL)a9 accessibilityInvertColors:(BOOL)a10 accessibilityReduceMotion:(BOOL)a11 accessibilityReduceTransparency:(BOOL)a12;

@end
