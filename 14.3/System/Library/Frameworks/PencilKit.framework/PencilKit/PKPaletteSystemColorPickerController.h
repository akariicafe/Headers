@class NSString, UIColorPickerViewController;

@interface PKPaletteSystemColorPickerController : PKPaletteBaseColorPickerController <UIColorPickerViewControllerDelegate>

@property (retain, nonatomic) UIColorPickerViewController *colorPickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)colorPickerViewControllerDidSelectColor:(id)a0;
- (id)viewController;
- (id)selectedColor;
- (void)setSelectedColor:(id)a0;
- (long long)colorUserInterfaceStyle;
- (void)setColorUserInterfaceStyle:(long long)a0;
- (BOOL)_shouldConvertColorPickerColorFromDarkToLight;

@end
