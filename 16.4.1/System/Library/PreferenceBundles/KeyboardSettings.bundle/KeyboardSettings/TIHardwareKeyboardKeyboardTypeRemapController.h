@class NSMutableArray;

@interface TIHardwareKeyboardKeyboardTypeRemapController : PSListController {
    struct __IOHIDEventSystemClient { } *_eventSystemClient;
    NSMutableArray *_keyboards;
    unsigned long long _keysSectionStart;
    struct __IOHIDServiceClient { } *_currentKeyboard;
}

@property (readonly, nonatomic) struct __IOHIDServiceClient { } *currentKeyboard;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)keyboardTypeSectionSpecifiers;
- (id)keyboardsSectionSpecifiers;
- (void)loadKeyboards;
- (id)newSpecifiers;
- (void)reloadSpecifiersWithAnimation;

@end
