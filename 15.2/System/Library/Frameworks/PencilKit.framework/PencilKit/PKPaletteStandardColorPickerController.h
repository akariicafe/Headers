@class NSString, PKColorPicker;

@interface PKPaletteStandardColorPickerController : PKPaletteBaseColorPickerController <PKColorPickerDelegate>

@property (retain, nonatomic) PKColorPicker *colorPickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectedColor;
- (id)viewController;
- (void).cxx_destruct;
- (void)setSelectedColor:(id)a0;
- (id)init;
- (void)setColorUserInterfaceStyle:(long long)a0;
- (void)colorPickerDidChangeSelectedColor:(id)a0;
- (long long)colorUserInterfaceStyle;
- (void)setSelectedColorForPoint:(struct CGPoint { double x0; double x1; })a0;

@end
