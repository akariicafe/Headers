@protocol SGSuggestionsServiceMessagesProtocol, NSObject;

@interface IMDSuggestions : NSObject <SGMessagesSuggestionsServiceDelegate>

@property (retain) id<NSObject, SGSuggestionsServiceMessagesProtocol> sgService;

- (void)suggestionsFromMessage:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)suggestionsService:(id)a0 needsContextForConversationIdentifier:(id)a1 numberOfMessagesNeeded:(unsigned long long)a2;
- (id)init;
- (void)dealloc;

@end
