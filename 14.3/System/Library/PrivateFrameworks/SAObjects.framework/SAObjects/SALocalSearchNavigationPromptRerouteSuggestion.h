@interface SALocalSearchNavigationPromptRerouteSuggestion : SADomainCommand

+ (id)navigationPromptRerouteSuggestion;
+ (id)navigationPromptRerouteSuggestionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
