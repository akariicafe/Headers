@class NSString, PKColorPicker;

@interface PKPaletteStandardColorPickerController : PKPaletteBaseColorPickerController <PKColorPickerDelegate>

@property (retain, nonatomic) PKColorPicker *colorPickerViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSelectedColor:(id)a0;
- (id)selectedColor;
- (id)viewController;
- (id)init;
- (void).cxx_destruct;
- (void)setSupportsAlpha:(BOOL)a0;
- (BOOL)supportsAlpha;
- (void)colorPickerDidChangeSelectedColor:(id)a0;
- (void)setColorUserInterfaceStyle:(long long)a0;
- (long long)colorUserInterfaceStyle;
- (void)setSelectedColorForPoint:(struct CGPoint { double x0; double x1; })a0;

@end
