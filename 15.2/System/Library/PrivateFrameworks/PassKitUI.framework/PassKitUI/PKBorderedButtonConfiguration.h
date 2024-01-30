@class UIColor;

@interface PKBorderedButtonConfiguration : UIButtonConfiguration

@property (nonatomic) unsigned long long border;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

+ (id)tintedButtonConfiguration;
+ (id)grayButtonConfiguration;
+ (id)filledButtonConfiguration;
+ (id)plainButtonConfiguration;

- (void).cxx_destruct;
- (void)_initializeDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
