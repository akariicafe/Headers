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

- (BOOL)hasAutocorrection;
- (void)clearAutofillAndTextSuggestions;
- (void)clearAutocorrection;
- (BOOL)hasTextSuggestionCandidates;
- (void)addAutocorrectionObserver:(id)a0;
- (void)requestAutocorrectionWithExecutionContext:(id)a0;
- (BOOL)hasContinuousPathConversions;
- (void)updateAfterShiftStateChange;
- (void)setNeedsAutocorrection;
- (void)removeAutocorrectionObserver:(id)a0;
- (void)clearAutocorrectionAndNotifyObservers:(BOOL)a0;
- (BOOL)hasAutofillCandidates;
- (id)init;
- (BOOL)hasProactiveCandidates;
- (void).cxx_destruct;

@end
