@class NSString, UIViewController, UIColor;
@protocol PKPaletteColorPicker, PKPaletteColorPickerControllerDelegate;

@interface PKPaletteBaseColorPickerController : NSObject <PKPaletteColorPickerController, PKPaletteColorPicker>

@property (readonly, nonatomic) id<PKPaletteColorPicker> colorPicker;
@property (readonly, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<PKPaletteColorPickerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) UIColor *selectedColor;
@property (nonatomic) BOOL supportsAlpha;
@property (nonatomic) long long colorUserInterfaceStyle;

- (void).cxx_destruct;
- (void)setSelectedColorForPoint:(struct CGPoint { double x0; double x1; })a0;

@end
