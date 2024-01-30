@class NSString, UIColorPickerViewController;

@interface PKPaletteSystemColorPickerController : PKPaletteBaseColorPickerController <UIColorPickerViewControllerDelegate>

@property (retain, nonatomic) UIColorPickerViewController *colorPickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (id)selectedColor;
- (id)viewController;
- (void).cxx_destruct;
- (void)setSelectedColor:(id)a0;
- (id)init;
- (void)setColorUserInterfaceStyle:(long long)a0;
- (long long)colorUserInterfaceStyle;
- (BOOL)_shouldConvertColorPickerColorFromDarkToLight;

@end
