@class NSArray, NSString;

@interface UITextChecker : NSObject {
    long long _usdt;
    NSString *_checkerWarmingLanguage;
}

@property (class, readonly, nonatomic) NSArray *availableLanguages;

@property (retain, nonatomic) NSArray *ignoredWords;

+ (id)keyboardLanguages;
+ (id)dictionaryInfo:(id)a0;
+ (BOOL)hasLearnedWord:(id)a0;
+ (void)noteWordTerminator:(id)a0 replacement:(id)a1;
+ (id)_dictionaryEntryForName:(id)a0;
+ (BOOL)_forgetWord:(id)a0 inDictionary:(id)a1;
+ (BOOL)_isWord:(id)a0 inDictionary:(id)a1;
+ (BOOL)_learnWord:(id)a0 inDictionary:(id)a1;
+ (void)_setDictionaryEntry:(id)a0 forName:(id)a1;
+ (void)_setWords:(id)a0 inDictionary:(id)a1;
+ (id)_wordsInDictionary:(id)a0;
+ (id)bestLanguageForString:(id)a0 fromAlternatives:(id)a1 currentLanguage:(id)a2;
+ (id)bestLanguageForString:(id)a0 fromAlternatives:(id)a1 currentLanguage:(id)a2 insertionPointIndex:(unsigned long long)a3 scriptForBestLanguage:(id *)a4;
+ (struct __CFSet { } *)createDictHashTable:(BOOL)a0;
+ (BOOL)grammarCheckingEnabled;
+ (BOOL)grammarCheckingEnabledForLanguage:(id)a0;
+ (void)learnWord:(id)a0;
+ (void)noteTextReplacement:(id)a0;
+ (id)openUserDictionary:(id)a0;
+ (id)postEditor;
+ (void)setString:(id)a0 isExemptFromChecker:(BOOL)a1;
+ (long long)uniqueSpellDocumentTag;
+ (void)unlearnWord:(id)a0;

- (id)_checker;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_chunkAndCheckGrammarInString:(id)a0 language:(id)a1 usingChecker:(id)a2 details:(id *)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_chunkAndFindMisspelledWordInString:(id)a0 languages:(id)a1 learnedDictionaries:(id)a2 wordCount:(long long *)a3 correction:(id *)a4 usingChecker:(id)a5;
- (BOOL)_doneLoading;
- (id)_initWithAsynchronousLoading:(BOOL)a0;
- (id)_nameOfDictionaryForDocumentTag:(long long)a0;
- (void)_setDocumentDictionaryName:(id)a0;
- (void)_setLanguageDictionaryName:(id)a0;
- (long long)adjustOffsetToNextWordBoundaryInString:(id)a0 startingAt:(long long)a1;
- (id)alternativesForPinyinInputString:(id)a0;
- (BOOL)canChangeCaseOfFirstLetterInString:(id)a0 toUpperCase:(BOOL)a1 language:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkGrammarOfString:(id)a0 startingAt:(long long)a1 language:(id)a2 wrap:(BOOL)a3 details:(id *)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkSpellingOfString:(id)a0 startingAt:(long long)a1 language:(id)a2 wrap:(BOOL)a3 correction:(id *)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkSpellingOfString:(id)a0 startingAt:(long long)a1 languages:(id)a2 wrap:(BOOL)a3 correction:(id *)a4;
- (id)checkString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 types:(unsigned long long)a2 languages:(id)a3 options:(id)a4;
- (id)completionsForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (id)correctionForWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (id)grammarAlternativesForString:(id)a0;
- (id)grammarGuessesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (id)guessesForWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (void)ignoreWord:(id)a0;
- (void)initGlobalsWithAsynchronousLoading:(BOOL)a0;
- (void)initPostEditingWithAsynchronousLoading:(BOOL)a0;
- (void)initUserDictionaries;
- (BOOL)isWordInUserDictionaries:(id)a0 caseSensitive:(BOOL)a1;
- (id)postEditor;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfMisspelledWordInString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 startingAt:(long long)a2 wrap:(BOOL)a3 language:(id)a4;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfMisspelledWordInString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 startingAt:(long long)a2 wrap:(BOOL)a3 languages:(id)a4;
- (void)recordResponse:(unsigned long long)a0 toGrammarDetailInAnnotatedString:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)releaseAllLexicons;
- (long long)requestGrammarCheckingOfString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 language:(id)a2 options:(id)a3 completionHandler:(id /* block */)a4;
- (void)resetAllLanguageModels;
- (id)stringForInputString:(id)a0 language:(id)a1;
- (id)suggestWordInLanguage:(id)a0;

@end
