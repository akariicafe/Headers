@class PSSpecifier;

@interface ASTLockScreenSuggestionsGlobalController : NSObject {
    PSSpecifier *_specifier;
    id /* block */ _onChangeCallback;
}

- (id)specifier;
- (void).cxx_destruct;
- (void)setLockScreenSuggestionsEnabled:(id)a0 forSpecifier:(id)a1;
- (id)isLockScreenSuggestionEnabled:(id)a0;
- (id)initWithOnChangeCallback:(id /* block */)a0;

@end
