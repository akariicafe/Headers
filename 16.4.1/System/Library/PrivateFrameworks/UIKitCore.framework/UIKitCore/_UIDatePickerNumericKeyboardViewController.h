@class UIKeyboard;

@interface _UIDatePickerNumericKeyboardViewController : UIViewController

@property (readonly, nonatomic) UIKeyboard *keyboard;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
