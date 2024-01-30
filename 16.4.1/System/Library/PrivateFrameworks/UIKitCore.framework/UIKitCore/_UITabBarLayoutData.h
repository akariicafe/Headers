@class UIColor, UIImage;

@interface _UITabBarLayoutData : _UIBarAppearanceData

@property (copy, nonatomic) UIColor *selectionIndicatorTintColor;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (nonatomic) long long itemPositioning;
@property (nonatomic) double itemWidth;
@property (nonatomic) double itemSpacing;

+ (id)standardLayoutData;
+ (id)decodeFromCoder:(id)a0 prefix:(id)a1;

- (void)encodeToCoder:(id)a0 prefix:(id)a1;
- (void)describeInto:(id)a0;
- (long long)hashInto:(long long)a0;
- (id)replicate;
- (BOOL)checkEqualTo:(id)a0;
- (long long)positioningForTraitCollection:(id)a0;
- (void).cxx_destruct;

@end
