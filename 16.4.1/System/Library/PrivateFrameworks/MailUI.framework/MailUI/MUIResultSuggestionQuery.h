@class EMSearchableIndexUserQuery, NSString, MUISearchSuggestionPhraseManager, EMMessageRepository, MUISearchSenderQueryManager;
@protocol MUISearchResultsSuggesterConfiguration;

@interface MUIResultSuggestionQuery : NSObject <MUISearchSuggesterQuery> {
    MUISearchSuggestionPhraseManager *_phraseManager;
    id /* block */ _handler;
    NSString *_bundleID;
    EMMessageRepository *_messageRepository;
    MUISearchSenderQueryManager *_senderQueryManager;
    id<MUISearchResultsSuggesterConfiguration> _configuration;
    EMSearchableIndexUserQuery *_underlyingQuery;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;

@end
