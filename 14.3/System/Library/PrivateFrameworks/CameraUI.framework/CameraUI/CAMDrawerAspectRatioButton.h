@class NSMutableDictionary;

@interface CAMDrawerAspectRatioButton : CAMControlDrawerMenuButton

@property (readonly, nonatomic) NSMutableDictionary *_imagesByText;
@property (nonatomic) long long aspectRatio;

- (void)updateImage;
- (id)initWithLayoutStyle:(long long)a0;
- (void).cxx_destruct;
- (id)imageNameForCurrentState;
- (long long)controlType;
- (void)didSelectMenuItem:(id)a0;
- (id)hudItemForMenuHeader;
- (id)hudItemForMenuItem:(id)a0;
- (BOOL)isMenuItemSelected:(id)a0;
- (id)loadMenuItems;
- (id)_titleForAspectRatio:(long long)a0;
- (id)_imageForAspectRatio:(long long)a0;

@end
