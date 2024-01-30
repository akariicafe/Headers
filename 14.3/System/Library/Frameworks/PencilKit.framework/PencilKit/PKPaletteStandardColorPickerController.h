@class NSString, PKColorPicker;

@interface PKPaletteStandardColorPickerController : PKPaletteBaseColorPickerController <PKColorPickerDelegate>

@property (retain, nonatomic) PKColorPicker *colorPickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)viewController;
- (id)selectedColor;
- (void)setSelectedColor:(id)a0;
- (void)colorPickerDidChangeSelectedColor:(id)a0;
- (long long)colorUserInterfaceStyle;
- (void)setColorUserInterfaceStyle:(long long)a0;
- (void)setSelectedColorForPoint:(struct CGPoint { double x0; double x1; })a0;

@end
