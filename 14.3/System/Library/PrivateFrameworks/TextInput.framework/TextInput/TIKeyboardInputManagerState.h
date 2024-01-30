@class TIKeyboardBehaviors, NSString, TIKeyboardCandidate, TIKeyEventMap, TICharacterSetDescription;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {
    union { long long integerValue; struct { unsigned char canHandleKeyHitTest : 1; unsigned char ignoresDeadKeys : 1; unsigned char shouldExtendPriorWord : 1; unsigned char suppliesCompletions : 1; unsigned char supportsNumberKeySelection : 1; unsigned char supportsSetPhraseBoundary : 1; unsigned char suppressCompletionsForFieldEditor : 1; unsigned char usesAutoDeleteWord : 1; unsigned char usesCandidateSelection : 1; unsigned char commitsAcceptedCandidate : 1; unsigned char newInputAcceptsUserSelectedCandidate : 1; unsigned char nextInputWouldStartSentence : 1; unsigned char inputStringIsExemptFromChecker : 1; unsigned char suppressPlaceholderCandidate : 1; unsigned char usesAutocorrectionLists : 1; unsigned char autoquoteType : 2; unsigned char usesContinuousPath : 1; unsigned char usesContinuousPathProgressiveCandidates : 1; unsigned char usesPunctuationKeysForRowNavigation : 1; unsigned char insertsSpaceAfterPredictiveInput : 1; unsigned char shouldFixupIncompleteRomaji : 1; unsigned char usesLiveConversion : 1; unsigned char delayedCandidateList : 1; } fields; } _mask;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL canHandleKeyHitTest;
@property (nonatomic) BOOL ignoresDeadKeys;
@property (nonatomic) BOOL shouldExtendPriorWord;
@property (nonatomic) BOOL suppliesCompletions;
@property (nonatomic) BOOL supportsSetPhraseBoundary;
@property (nonatomic) BOOL suppressCompletionsForFieldEditor;
@property (nonatomic) BOOL usesAutoDeleteWord;
@property (nonatomic) BOOL usesCandidateSelection;
@property (nonatomic) BOOL usesAutocorrectionLists;
@property (nonatomic) BOOL commitsAcceptedCandidate;
@property (nonatomic) BOOL newInputAcceptsUserSelectedCandidate;
@property (nonatomic) unsigned long long autoquoteType;
@property (nonatomic) BOOL usesContinuousPath;
@property (nonatomic) BOOL usesContinuousPathProgressiveCandidates;
@property (nonatomic) BOOL insertsSpaceAfterPredictiveInput;
@property (nonatomic) BOOL shouldFixupIncompleteRomaji;
@property (copy, nonatomic) NSString *replacementForDoubleSpace;
@property (copy, nonatomic) NSString *wordSeparator;
@property (nonatomic) unsigned long long initialCandidateBatchCount;
@property (retain, nonatomic) TIKeyboardBehaviors *keyboardBehaviors;
@property (nonatomic) BOOL shouldAddModifierSymbolsToWordCharacters;
@property (copy, nonatomic) TICharacterSetDescription *wordCharacters;
@property (copy, nonatomic) TICharacterSetDescription *shortcutCompletions;
@property (copy, nonatomic) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate;
@property (copy, nonatomic) TICharacterSetDescription *inputsToReject;
@property (copy, nonatomic) TICharacterSetDescription *terminatorsPreventingAutocorrection;
@property (copy, nonatomic) TICharacterSetDescription *terminatorsDeletingAutospace;
@property (copy, nonatomic) NSString *inputString;
@property (nonatomic) unsigned long long inputIndex;
@property (nonatomic) unsigned long long inputCount;
@property (nonatomic) BOOL nextInputWouldStartSentence;
@property (nonatomic) BOOL inputStringIsExemptFromChecker;
@property (nonatomic) BOOL suppressPlaceholderCandidate;
@property (nonatomic) BOOL supportsNumberKeySelection;
@property (nonatomic) BOOL usesPunctuationKeysForRowNavigation;
@property (retain, nonatomic) TIKeyboardCandidate *autocorrectionRecordForInputString;
@property (copy, nonatomic) NSString *shadowTyping;
@property (copy, nonatomic) NSString *searchStringForMarkedText;
@property (retain, nonatomic) TIKeyEventMap *keyEventMap;

- (BOOL)acceptInputString:(id)a0;
- (BOOL)shouldDeleteAutospaceBeforeTerminator:(id)a0;
- (void)setDelayedCandidateList:(BOOL)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldSuppressAutocorrectionWithTerminator:(id)a0;
- (void)setUsesLiveConversion:(BOOL)a0;
- (BOOL)inputStringAcceptsCurrentCandidateIfSelected:(id)a0;
- (BOOL)delayedCandidateList;
- (BOOL)stringEndsWord:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)usesLiveConversion;
- (void)encodeWithCoder:(id)a0;

@end
