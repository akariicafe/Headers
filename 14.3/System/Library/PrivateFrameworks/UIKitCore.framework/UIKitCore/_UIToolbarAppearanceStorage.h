@class UIImage;

@interface _UIToolbarAppearanceStorage : _UIBarAppearanceStorage

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *miniBackgroundImage;
@property (retain, nonatomic) UIImage *topBackgroundImage;
@property (retain, nonatomic) UIImage *miniTopBackgroundImage;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImage *topShadowImage;
@property (nonatomic) BOOL hidesShadow;

+ (long long)typicalBarPosition;

- (void).cxx_destruct;

@end
