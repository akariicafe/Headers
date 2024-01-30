@class _UIColorPickerViewControllerConfiguration;
@protocol _UIColorPickerViewControllerDelegate;

@interface _UIColorPickerViewController : UIColorPickerViewController

@property (readonly, copy, nonatomic) _UIColorPickerViewControllerConfiguration *configuration;
@property (weak, nonatomic) id<_UIColorPickerViewControllerDelegate> delegate;

- (void)_pickerDidSelectColor:(id)a0;
- (void)_colorPickerDidFinish;

@end
