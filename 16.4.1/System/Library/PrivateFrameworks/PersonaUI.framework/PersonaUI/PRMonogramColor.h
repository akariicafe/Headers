@class UIColor, NSArray, NSBundle, NSString;

@interface PRMonogramColor : NSObject

@property (class, readonly, nonatomic) NSArray *availableColorNames;
@property (class, readonly, nonatomic) NSArray *availableColors;

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) UIColor *selectedActiveColor;
@property (retain, nonatomic) UIColor *selectedInactiveColor;
@property (retain, nonatomic) UIColor *selectedActiveTextColor;
@property (retain, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) NSString *colorName;

+ (id)defaultGradientStartColor;
+ (id)defaultSelectedActiveColor;
+ (id)colorWithName:(id)a0 inBundle:(id)a1;
+ (id)defaultSelectedActiveTextColor;
+ (id)defaultGradientEndColor;
+ (id)gradientStartColor:(id)a0;
+ (id)generateMonogramGradientColorsByNameDictionary;
+ (id)monogramGradientColorNamed:(id)a0;
+ (id)gradientEndName:(id)a0;
+ (id)gradientStartName:(id)a0;
+ (id)defaultBundle;
+ (id)defaultSelectedInactiveColor;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)setColorName:(id)a0;
- (id)initWithColorName:(id)a0;
- (id)initWithRandomColor;
- (id)initWithColorName:(id)a0 inBundle:(id)a1;

@end
