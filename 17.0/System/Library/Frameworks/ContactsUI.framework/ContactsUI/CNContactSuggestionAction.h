@interface CNContactSuggestionAction : CNContactAction

- (BOOL)_confirmOrReject:(BOOL)a0;
- (BOOL)confirmSuggestion;
- (BOOL)ignoreSuggestion;
- (void)performActionWithSender:(id)a0;

@end
