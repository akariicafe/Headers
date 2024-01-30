@interface UIDictationUtilities : NSObject

+ (id)bestInterpretationForDictationResult:(id)a0;
+ (id)_properNameForString:(id)a0;
+ (void)attributedString:(id)a0 withIdentifiersBlock:(id /* block */)a1;
+ (id)attributedStringForDictationResult:(id)a0 andCorrectionIdentifier:(id)a1 capturePrefixAndPostfixWordCount:(unsigned long long)a2;
+ (id)bestInterpretationForPhrases:(id)a0;
+ (unsigned long long)characterDeletionCount:(id)a0;
+ (unsigned long long)characterInsertionCount:(id)a0;
+ (unsigned long long)characterSubstitutionCount:(id)a0;
+ (id)dictationPhrasesFromPhraseArray:(id)a0;
+ (id)dictationPhrasesFromTokenMatrix:(id)a0;
+ (id)interpretationFromAFInterpretation:(id)a0;
+ (id)interpretationFromAFTokens:(id)a0;
+ (void)logSpeechAlternativeReplacement:(id)a0 originalText:(id)a1 replacementText:(id)a2 index:(unsigned long long)a3;
+ (unsigned long long)maxLoggableLengthOfInsertionBySubstitution:(id)a0;
+ (unsigned long long)maxLoggableLengthOfInsertionWithDeletion:(id)a0;
+ (unsigned long long)maxLoggableLengthOfInsertionWithoutDeletion:(id)a0;
+ (id)metadataDictionaryForCorrectionIdentifier:(id)a0;
+ (BOOL)needsLeadingSpaceForPhrases:(id)a0 secureInput:(BOOL)a1;
+ (BOOL)needsLeadingSpaceForText:(id)a0 secureInput:(BOOL)a1;
+ (BOOL)needsLeadingSpaceForText:(id)a0 secureInput:(BOOL)a1 previousCharacter:(unsigned short)a2 selectionStartIsStartOfParagraph:(BOOL)a3;
+ (BOOL)needsTrailingSpaceForPhrases:(id)a0 secureInput:(BOOL)a1;
+ (BOOL)needsTrailingSpaceForText:(id)a0 secureInput:(BOOL)a1;
+ (id)phraseFromAFPhrase:(id)a0;
+ (void)selectionStartInfoWithBlock:(id /* block */)a0;
+ (BOOL)shouldLogCorrectionInfoForCurrentBundleId;
+ (id)tokenFromAFToken:(id)a0;
+ (void)trackDeletion:(id)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void)trackInsertion:(id)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (void)trackSubstitution:(id)a0 originalText:(id)a1 originalTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 replacementText:(id)a3 replacementTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
+ (id)trackingPunctuations;
+ (unsigned long long)updateCharacterDeletionCount:(id)a0 delta:(int)a1;
+ (unsigned long long)updateCharacterInsertionCount:(id)a0 delta:(int)a1;
+ (long long)updateCharacterModificationCount:(id)a0 delta:(int)a1;
+ (unsigned long long)updateCharacterSubstitutionCount:(id)a0 delta:(int)a1;
+ (id)voiceCommandParameterFromAFVoiceCommandGrammarParamMatch:(id)a0;

@end
