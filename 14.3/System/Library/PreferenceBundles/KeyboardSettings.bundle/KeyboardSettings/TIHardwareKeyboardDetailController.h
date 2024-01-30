@class NSString;

@interface TIHardwareKeyboardDetailController : PSListController

@property (readonly, nonatomic) NSString *inputMode;

- (void)dealloc;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)setHardwareLayout:(id)a0;
- (void)viewDidLoad;
- (id)newSpecifiers;

@end
