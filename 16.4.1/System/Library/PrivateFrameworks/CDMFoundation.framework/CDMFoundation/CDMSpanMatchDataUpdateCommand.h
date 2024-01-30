@class CKVocabularySearcher, NSString;

@interface CDMSpanMatchDataUpdateCommand : CDMBaseCommand

@property (readonly, nonatomic) CKVocabularySearcher *searcher;
@property (readonly, nonatomic) NSString *userId;

- (void).cxx_destruct;
- (id)initWithUserId:(id)a0;

@end
