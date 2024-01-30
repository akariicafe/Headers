@interface CSTokenScopeParser : NSObject

- (id)init;
- (long long)indexForScopeKey:(id)a0;
- (void)loadDefaultScopeKeyMapTable;
- (void)loadScopeKeyMapTableForCurrentLocale;
- (id)messageSuggestionTokenForString:(id)a0;
- (id)scopeKeyMapTable;
- (id)suggestionTokenForString:(id)a0;
- (id)tokenFromConfiguration:(id)a0 userString:(id)a1 displayString:(id)a2 handle:(id)a3;
- (id)tokenScopeConfigurationForKey:(id)a0;
- (id)tokenScopeConfigurationTable;
- (void)updateScopeKeyMapTableIfNeeded;

@end
