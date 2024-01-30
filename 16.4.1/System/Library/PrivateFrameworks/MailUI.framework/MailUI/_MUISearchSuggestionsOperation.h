@class NSMutableArray, NSArray, MUISearchSuggestionPhraseManager, NSObject, MUISearchSuggestionsGenerator, MUISearchRequestID;
@protocol OS_dispatch_queue;

@interface _MUISearchSuggestionsOperation : NSObject {
    _Atomic BOOL _isCancelled;
    MUISearchSuggestionsGenerator *_generator;
    MUISearchRequestID *_requestID;
    MUISearchSuggestionPhraseManager *_phraseManager;
    NSArray *_suggesters;
    NSMutableArray *_runningSuggesters;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;

@end
