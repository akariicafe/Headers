@class UIColor, UITraitCollection;

@interface PXGViewEnvironment : NSObject <NSCopying>

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) struct CGColor { } *selectionHighlightColor;
@property (readonly, nonatomic) BOOL accessibilityEnabled;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithView:(id)a0 accessibilityEnabled:(BOOL)a1;

@end
