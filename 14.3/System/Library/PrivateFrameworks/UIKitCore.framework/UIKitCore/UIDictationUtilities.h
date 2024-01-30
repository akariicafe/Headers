@interface UIDictationUtilities : NSObject

+ (void)trackSubstitution:(id)a0 originalText:(id)a1 originalTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 replacementText:(id)a3 replacementTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
+ (void)logSpeechAlternativeReplacement:(id)a0 originalText:(id)a1 replacementText:(id)a2 index:(unsigned long long)a3;
+ (id)tokenFromAFToken:(id)a0;
+ (id)phraseFromAFPhrase:(id)a0;
+ (id)bestInterpretationForDictationResult:(id)a0;
+ (id)_properNameForString:(id)a0;
+ (id)dictationPhrasesFromPhraseArray:(id)a0;
+ (BOOL)needsLeadingSpaceForText:(id)a0 secureInput:(BOOL)a1;
+ (BOOL)needsTrailingSpaceForPhrases:(id)a0 secureInput:(BOOL)a1;
+ (BOOL)needsLeadingSpaceForPhrases:(id)a0 secureInput:(BOOL)a1;
+ (id)interpretationFromAFTokens:(id)a0;
+ (id)interpretationFromAFInterpretation:(id)a0;
+ (unsigned long long)characterDeletionCount:(id)a0;
+ (id)dictationPhrasesFromTokenMatrix:(id)a0;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)a0;
+ (id)bestInterpretationForPhrases:(id)a0;
+ (unsigned long long)characterInsertionCount:(id)a0;
+ (id)attributedStringForDictationResult:(id)a0 andCorrectionIdentifier:(id)a1;
+ (unsigned long long)characterSubstitutionCount:(id)a0;
+ (unsigned long long)updateCharacterDeletionCount:(id)a0 delta:(int)a1;
+ (unsigned long long)updateCharacterSubstitutionCount:(id)a0 delta:(int)a1;
+ (unsigned long long)updateCharacterInsertionCount:(id)a0 delta:(int)a1;
+ (void)trackInsertion:(id)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (long long)updateCharacterModificationCount:(id)a0 delta:(int)a1;
+ (void)trackDeletion:(id)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void)attributedString:(id)a0 withIdentifiersBlock:(id /* block */)a1;
+ (unsigned long long)maxLoggableLengthOfInsertionWithoutDeletion:(id)a0;
+ (unsigned long long)maxLoggableLengthOfInsertionWithDeletion:(id)a0;
+ (unsigned long long)maxLoggableLengthOfInsertionBySubstitution:(id)a0;

@end
