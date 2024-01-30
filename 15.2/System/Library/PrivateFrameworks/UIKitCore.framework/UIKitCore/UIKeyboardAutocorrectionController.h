@class NSHashTable, TIKeyboardCandidate, TIAutocorrectionList;

@interface UIKeyboardAutocorrectionController : NSObject {
    unsigned long long _signpostToken;
    BOOL _requestedAutocorrection;
    BOOL _needsAutocorrection;
    BOOL _hasPendingAutocorrection;
    NSHashTable *_autocorrectionObservers;
}

@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (retain, nonatomic) TIAutocorrectionList *textSuggestionList;
@property (readonly, nonatomic) BOOL requestedAutocorrection;
@property (nonatomic) unsigned long long maximumNumberOfCandidates;
@property (readonly, nonatomic) BOOL hasActiveObservers;

- (BOOL)hasProactiveCandidates;
- (BOOL)hasContinuousPathConversions;
- (void)setNeedsAutocorrection;
- (void)addAutocorrectionObserver:(id)a0;
- (void)clearAutocorrection;
- (void)updateAfterShiftStateChange;
- (void).cxx_destruct;
- (BOOL)hasAutocorrection;
- (id)init;
- (void)clearAutofillAndTextSuggestions;
- (BOOL)hasAutofillCandidates;
- (void)clearAutocorrectionAndNotifyObservers:(BOOL)a0;
- (BOOL)hasTextSuggestionCandidates;
- (void)requestAutocorrectionWithExecutionContext:(id)a0;
- (void)removeAutocorrectionObserver:(id)a0;

@end
