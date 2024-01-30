@class TIAutocorrectionList, TIKeyboardCandidate, NSHashTable;

@interface UIKeyboardAutocorrectionController : NSObject {
    unsigned long long _signpostToken;
}

@property (nonatomic) BOOL needsAutocorrection;
@property (nonatomic) BOOL deferredAutocorrection;
@property (nonatomic) BOOL requestedAutocorrection;
@property (retain, nonatomic) NSHashTable *autocorrectionObservers;
@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (retain, nonatomic) TIAutocorrectionList *textSuggestionList;

- (id)init;
- (void).cxx_destruct;
- (void)updateSuggestionViews;
- (void)clearAutofillAndTextSuggestions;
- (BOOL)hasProactiveCandidates;
- (void)requestAutocorrectionWithExecutionContext:(id)a0;
- (void)clearAutocorrection;
- (BOOL)hasContinuousPathConversions;
- (void)clearAutocorrectionAndNotifyObservers:(BOOL)a0;
- (BOOL)hasCaseableAutocorrection;
- (BOOL)hasAutofillCandidates;
- (void)_notifyObserversOfUpdatedAutocorrectionList:(id)a0;
- (void)setNeedsAutocorrection;
- (void)_notifyObserversOfClearedAutocorrectionList;
- (void)_setAutocorrectionList:(id)a0 notifyObserver:(BOOL)a1;
- (BOOL)hasTextSuggestionCandidates;
- (BOOL)hasAutocorrection;
- (void)removeAutocorrectionObserver:(id)a0;
- (void)addAutocorrectionObserver:(id)a0;

@end
