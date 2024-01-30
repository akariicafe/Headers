@class UIImage, UIColor, _UITabBarItemAppearanceStorage;

@interface _UITabBarAppearanceStorage : NSObject {
    _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *shadowImage;
@property (retain, nonatomic) UIImage *selectionIndicatorImage;
@property (retain, nonatomic) UIColor *barTintColor;
@property (retain, nonatomic) UIColor *selectedImageTintColor;
@property (retain, nonatomic) UIColor *unselectedImageTintColor;
@property (retain, nonatomic) _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;

- (id)_tabItemAppearanceStorage;
- (void).cxx_destruct;

@end
