@class NSString;

@interface UISMutableSlotStyle : UISSlotStyle

@property (nonatomic) unsigned long long accessibilityButtonShapes;
@property (nonatomic) unsigned long long accessibilityContrast;
@property (nonatomic) unsigned long long displayRange;
@property (nonatomic) unsigned char displayScale;
@property (nonatomic) unsigned long long layoutDirection;
@property (nonatomic) unsigned long long legibilityWeight;
@property (copy, nonatomic) NSString *localization;
@property (nonatomic) unsigned long long preferredContentSizeCategory;
@property (nonatomic) struct CGColor { } *tintColor;
@property (nonatomic) unsigned long long userInterfaceIdiom;
@property (nonatomic) unsigned long long userInterfaceStyle;

- (void)setUserInterfaceStyle:(unsigned long long)a0;
- (void)setPreferredContentSizeCategory:(unsigned long long)a0;
- (void)setLayoutDirection:(unsigned long long)a0;
- (void)setDisplayScale:(unsigned char)a0;
- (void)setUserInterfaceIdiom:(unsigned long long)a0;
- (void)setTintColor:(struct CGColor { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setLegibilityWeight:(unsigned long long)a0;
- (void)setDisplayRange:(unsigned long long)a0;
- (void)setAccessibilityButtonShapes:(unsigned long long)a0;
- (void)setLocalization:(id)a0;
- (void)setAccessibilityContrast:(unsigned long long)a0;

@end
