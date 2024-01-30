@class NSMutableArray, NSString, NSArray, NSLocale, CKContextResponse, NSDate;

@interface CKContextCompleter : NSObject {
    CKContextResponse *_response;
    NSString *_ignorePrefix;
    NSLocale *_searchLocale;
    _Atomic BOOL _discarded;
    _Atomic BOOL _engaged;
    _Atomic unsigned long long _inputKeystrokes;
    NSArray *_couldHaveShown;
    NSString *_input;
    NSDate *_hideCompletionsAfterDate;
    BOOL _hideZKW;
    BOOL _hideCompletions;
    unsigned long long _mustPrefixMatchLength;
    NSMutableArray *_zkwResults;
    unsigned long long _creationTime;
    BOOL _likelyUnsolicited;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)discard;
- (id)_resultsMatching:(id)a0;
- (id)resultsMatching:(id)a0;
- (void)logResultsShown:(unsigned long long)a0 serverOverride:(BOOL)a1 forInput:(id)a2;
- (void)logEngagement:(id)a0 forInput:(id)a1 completion:(id)a2;
- (id)resultsMatchingTags:(id)a0;
- (void)logTransactionSuccessfulForInput:(id)a0 completion:(id)a1;
- (id)queriesMatching:(id)a0;
- (void)logResultsShown:(unsigned long long)a0 serverOverride:(BOOL)a1;
- (void)logEngagement:(id)a0 forInput:(id)a1;
- (void)logTransactionSuccessfulForInput:(id)a0;
- (id)initWithResponse:(id)a0;

@end
