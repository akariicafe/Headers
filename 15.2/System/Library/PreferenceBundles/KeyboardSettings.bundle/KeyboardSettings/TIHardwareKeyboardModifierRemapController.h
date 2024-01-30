@class NSMutableArray, NSMutableDictionary;

@interface TIHardwareKeyboardModifierRemapController : PSListController {
    struct __IOHIDEventSystemClient { } *_eventSystemClient;
    NSMutableArray *_keyboards;
    unsigned long long _keysSectionStart;
    struct __IOHIDServiceClient { } *_currentKeyboard;
    NSMutableDictionary *_remapping;
}

@property (readonly, nonatomic) struct __IOHIDServiceClient { } *currentKeyboard;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)newSpecifiers;
- (id)valueForRemappingKey:(id)a0;
- (void)reloadSpecifiersWithAnimation;
- (void)saveRemapping;
- (void)loadKeyboards;
- (void)loadRemapping;
- (id)keyboardsSectionSpecifiers;
- (id)keysSectionSpecifiers;
- (void)resetRemapping;
- (id)subtitleForSpecifier:(id)a0;
- (void)setRemappingFromKey:(id)a0 toValue:(id)a1;

@end
