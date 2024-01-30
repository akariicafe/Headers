@interface CNContactSuggestionAction : CNContactAction

- (void)performActionWithSender:(id)a0;
- (BOOL)_confirmOrReject:(BOOL)a0;
- (BOOL)ignoreSuggestion;
- (BOOL)confirmSuggestion;

@end
