@class NSObject;
@protocol SGSuggestionsServiceMailProtocol, SGSuggestionsServiceMessagesProtocol;

@interface SGFoundInSuggestionGuardedData : NSObject {
    NSObject<SGSuggestionsServiceMailProtocol> *_mailService;
    NSObject<SGSuggestionsServiceMessagesProtocol> *_messageService;
}

- (void).cxx_destruct;

@end
