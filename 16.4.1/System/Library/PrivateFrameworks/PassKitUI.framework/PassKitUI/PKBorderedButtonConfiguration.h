@class UIColor;

@interface PKBorderedButtonConfiguration : UIButtonConfiguration

@property (nonatomic) unsigned long long border;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) UIColor *borderColor;

+ (id)filledButtonConfiguration;
+ (id)grayButtonConfiguration;
+ (id)plainButtonConfiguration;
+ (id)tintedButtonConfiguration;

- (void)_initializeDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
