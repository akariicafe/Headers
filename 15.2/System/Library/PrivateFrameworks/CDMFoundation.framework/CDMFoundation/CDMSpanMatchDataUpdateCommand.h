@class CKVocabularySearcher;

@interface CDMSpanMatchDataUpdateCommand : CDMSpanMatchBaseRequestCommand

@property (readonly, nonatomic) CKVocabularySearcher *searcher;

- (void).cxx_destruct;
- (id)commandName;
- (id)initWithSearcher:(id)a0;

@end
