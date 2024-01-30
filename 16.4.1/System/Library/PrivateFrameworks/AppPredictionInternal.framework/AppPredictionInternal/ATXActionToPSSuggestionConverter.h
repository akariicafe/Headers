@interface ATXActionToPSSuggestionConverter : NSObject

- (id)psRecipientFromINPerson:(id)a0;
- (id)psSuggesetionFromINStartCallIntent:(id)a0;
- (id)proactiveSuggestionForPeopleSuggestion:(id)a0 originalSuggestion:(id)a1;
- (id)convertSuggestions:(id)a0;
- (id)psSuggestionFromINSendMessageIntent:(id)a0;

@end
