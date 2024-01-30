@class SearchUIImage;

@interface SearchUIImageButton : UIButton

@property (retain, nonatomic) SearchUIImage *unselectedImage;
@property (retain, nonatomic) SearchUIImage *selectedImage;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void)didMoveToWindow;
- (void).cxx_destruct;

@end
