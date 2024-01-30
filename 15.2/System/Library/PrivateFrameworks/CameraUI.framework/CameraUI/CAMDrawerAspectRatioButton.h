@class NSMutableDictionary;

@interface CAMDrawerAspectRatioButton : CAMControlDrawerMenuButton

@property (readonly, nonatomic) NSMutableDictionary *_imagesByText;
@property (nonatomic) long long aspectRatio;

- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (id)initWithLayoutStyle:(long long)a0;
- (void)updateImage;
- (void).cxx_destruct;
- (long long)controlType;
- (id)imageNameForCurrentState;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (id)_titleForAspectRatio:(long long)a0;
- (id)_imageForAspectRatio:(long long)a0;

@end
