@class NSString, UIKeyboardInputMode;

@interface TIHardwareKeyboardDetailController : PSListController

@property (readonly, nonatomic) NSString *inputMode;
@property (copy, nonatomic) UIKeyboardInputMode *uiKeyboardinputMode;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)setHardwareLayout:(id)a0;
- (id)newSpecifiers;

@end
