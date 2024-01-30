@class UIKeyboard;

@interface _UIDatePickerNumericKeyboardViewController : UIViewController

@property (readonly, nonatomic) UIKeyboard *keyboard;

- (id)init;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
