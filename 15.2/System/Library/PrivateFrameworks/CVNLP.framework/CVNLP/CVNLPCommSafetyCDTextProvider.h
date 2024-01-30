@interface CVNLPCommSafetyCDTextProvider : CVNLPCommSafetyTextProvider

- (void)provideTextItemsWithConversationIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 progressHandler:(id /* block */)a3;
- (id)queryForConversationIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
