@class INVocabulary, IMDChatRegistry;

@interface IMDChatVocabularyUpdater : NSObject

@property (retain, nonatomic) IMDChatRegistry *chatRegistry;
@property (retain, nonatomic) INVocabulary *vocabulary;
@property (nonatomic) BOOL haveDeferredUpdateRequest;

+ (id)sharedInstance;
+ (void)performInitialUpdateIfNeeded;

- (void).cxx_destruct;
- (void)_updateVocabularyExcludingChat:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithChatRegistry:(id)a0 vocabulary:(id)a1;
- (void)updateVocabularyForAddedChat:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateVocabularyForDeferredUpdateRequestIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)updateVocabularyForDeletedChat:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateVocabularyForRenamedChat:(id)a0 completionHandler:(id /* block */)a1;

@end
