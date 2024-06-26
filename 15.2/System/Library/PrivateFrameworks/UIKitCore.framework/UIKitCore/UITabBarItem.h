@class UIColor, NSString, UITabBarButton, UIImage, _UITabBarItemAppearanceStorage, UITabBarAppearance;

@interface UITabBarItem : UIBarItem <_UIBarAppearanceChangeObserver> {
    NSString *_title;
    SEL _action;
    id _target;
    UIImage *_templateImage;
    UIImage *_selectedTemplateImage;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _imageInsets;
    UIImage *_landscapeTemplateImage;
    UIImage *_landscapeSelectedTemplateImage;
    UIImage *_landscapeSelectedImage;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _landscapeImageInsets;
    UITabBarButton *_view;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    struct { unsigned char enabled : 1; unsigned char style : 3; unsigned char isSystemItem : 1; unsigned char systemItem : 7; unsigned char customSelectedImage : 1; unsigned char customUnselectedImage : 1; } _tabBarItemFlags;
    BOOL _springLoaded;
    struct UIOffset { double horizontal; double vertical; } _badgeOffset;
}

@property (nonatomic, setter=_setBarMetrics:) long long _barMetrics;
@property (nonatomic, setter=_setImageStyle:) long long _imageStyle;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic, getter=_isSelected, setter=_setSelected:) BOOL _selected;
@property (readonly, nonatomic) UIImage *_internalLandscapeSelectedImagePhone;
@property (nonatomic, setter=_setUsesModernAppearance:) BOOL _usesModernAppearance;
@property (retain, nonatomic) UIImage *landscapeSelectedImagePhone;
@property (nonatomic) struct UIOffset { double x0; double x1; } badgeOffset;
@property (nonatomic) struct UIOffset { double x0; double x1; } landscapePhoneBadgeOffset;
@property (retain, nonatomic) UIImage *selectedImage;
@property (copy, nonatomic) NSString *badgeValue;
@property (nonatomic) struct UIOffset { double x0; double x1; } titlePositionAdjustment;
@property (copy, nonatomic) UIColor *badgeColor;
@property (copy, nonatomic) UITabBarAppearance *standardAppearance;
@property (copy, nonatomic) UITabBarAppearance *scrollEdgeAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_appearanceBlindViewClasses;

- (id)target;
- (void)setEnabled:(BOOL)a0;
- (void)setAction:(SEL)a0;
- (void)setFinishedSelectedImage:(id)a0 withFinishedUnselectedImage:(id)a1;
- (BOOL)isEnabled;
- (void)encodeWithCoder:(id)a0;
- (void)appearance:(id)a0 categoriesChanged:(long long)a1;
- (id)title;
- (void)_setTitleTextAttributeValue:(id)a0 forAttributeKey:(id)a1 state:(unsigned long long)a2;
- (id)_internalTemplateImagesForTabBarDisplayStyle:(long long)a0;
- (void)setTitleTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageInsets;
- (id)view;
- (BOOL)isSystemItem;
- (id)badgeTextAttributesForState:(unsigned long long)a0;
- (id)_internalTitleForTabBarDisplayStyle:(long long)a0;
- (void)_showSelectedIndicator:(BOOL)a0 changeSelection:(BOOL)a1;
- (id)_internalLargeContentSizeImage;
- (void)setView:(id)a0;
- (id)titleTextAttributesForState:(unsigned long long)a0;
- (id)_internalTitle;
- (id)resolvedTitle;
- (BOOL)isSpringLoaded;
- (void)setImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setSpringLoaded:(BOOL)a0;
- (void).cxx_destruct;
- (id)largeContentSizeImage;
- (id)_internalTemplateImage;
- (BOOL)animatedBadge;
- (id)init;
- (void)_updateView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })largeContentSizeImageInsets;
- (id)initWithCoder:(id)a0;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)initWithTitle:(id)a0 image:(id)a1 selectedImage:(id)a2;
- (void)_setInternalLandscapeTemplateImage:(id)a0;
- (id)_internalLandscapeTemplateImages;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (id)image;
- (id)_createViewForTabBar:(id)a0 asProxyView:(BOOL)a1;
- (long long)systemItem;
- (id)_internalLandscapeTemplateImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })landscapeImagePhoneInsets;
- (void)setTitle:(id)a0;
- (void)setLargeContentSizeImage:(id)a0;
- (id)unselectedImage;
- (void)_updateViewBadge;
- (id)initWithTabBarSystemItem:(long long)a0 tag:(long long)a1;
- (void)setImage:(id)a0;
- (void)setAnimatedBadge:(BOOL)a0;
- (void)_updateToMatchCurrentState;
- (BOOL)hasTitle;
- (SEL)action;
- (void)_setInternalTemplateImage:(id)a0;
- (void)setLandscapeImagePhone:(id)a0;
- (id)landscapeImagePhone;
- (void)setTarget:(id)a0;
- (id)_internalTemplateImages;
- (id)initWithTitle:(id)a0 image:(id)a1 tag:(long long)a2;
- (id)finishedUnselectedImage;
- (void)_updateViewAndPositionItems:(BOOL)a0;
- (void)_setInternalTitle:(id)a0;
- (void)setUnselectedImage:(id)a0;
- (void)setBadgeTextAttributes:(id)a0 forState:(unsigned long long)a1;
- (id)finishedSelectedImage;

@end
