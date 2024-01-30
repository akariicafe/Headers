@class NSMutableDictionary;

@interface CAMDrawerAspectRatioButton : CAMControlDrawerMenuButton

@property (readonly, nonatomic) NSMutableDictionary *_imagesByText;
@property (nonatomic) long long aspectRatio;

- (id)imageNameForCurrentState;
- (id)hudItemForAccessibilityHUDManager:(id)a0;
- (id)initWithLayoutStyle:(long long)a0;
- (void)updateImage;
- (long long)controlType;
- (void).cxx_destruct;
- (id)_imageForAspectRatio:(long long)a0;
- (id)_titleForAspectRatio:(long long)a0 useBriefText:(BOOL)a1;
- (void)didSelectMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;

@end
