@class NSArray, PSSpecifier, ASTLockScreenSuggestionsGlobalController, ASTLockScreenSuggestionSpecifier;

@interface ASTLockScreenSuggestionsDetailListController : PSListController {
    ASTLockScreenSuggestionSpecifier *_lockScreenSpecifier;
    PSSpecifier *_perAppGroup;
    NSArray *_perAppSpecifiers;
    ASTLockScreenSuggestionsGlobalController *_globalController;
    PSSpecifier *_globalSpecifier;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)_handleGlobalToggleChangeWithEnabled:(BOOL)a0;

@end
