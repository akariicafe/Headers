@class NSMutableDictionary;
@protocol SGDSuggestManagerMessagesProtocol;

@interface SGMessagesDaemonConnection : NSObject {
    NSMutableDictionary *_contextSent;
    id<SGDSuggestManagerMessagesProtocol> _remoteSuggestionManager;
}

- (void)setManagerForTesting:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionInterrupted;
- (id)initWithDaemonConnection:(id)a0;
- (BOOL)hasContextBeenSentForConversation:(id)a0;
- (void)didSendContextForConversation:(id)a0;
- (id)remoteSuggestionManager;

@end
