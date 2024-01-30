@class UIKeyboard;

@interface _UIDatePickerNumericKeyboardViewController : UIViewController

@property (readonly, nonatomic) UIKeyboard *keyboard;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;

@end
