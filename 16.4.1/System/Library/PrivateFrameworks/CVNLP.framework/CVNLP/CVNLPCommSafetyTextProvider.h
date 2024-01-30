@interface CVNLPCommSafetyTextProvider : NSObject

@property (class, retain) CVNLPCommSafetyTextProvider *defaultTextProvider;

- (void)provideTextItemsWithConversationIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2 progressHandler:(id /* block */)a3;

@end
