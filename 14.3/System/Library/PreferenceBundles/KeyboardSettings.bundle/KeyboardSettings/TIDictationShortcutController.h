@interface TIDictationShortcutController : PSListController

+ (id)attributedTitleForDictationShortcutValue:(long long)a0;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updatePreferenceForParent;

@end
