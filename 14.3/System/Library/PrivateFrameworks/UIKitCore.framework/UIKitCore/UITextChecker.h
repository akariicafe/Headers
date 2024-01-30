@class NSArray, NSString;

@interface UITextChecker : NSObject {
    id _reserved;
    long long _usdt;
    NSString *_checkerWarmingLanguage;
}

@property (class, readonly, nonatomic) NSArray *availableLanguages;

@property (retain, nonatomic) NSArray *ignoredWords;

+ (long long)uniqueSpellDocumentTag;
+ (void)_setDictionaryEntry:(id)a0 forName:(id)a1;
+ (id)openUserDictionary:(id)a0;
+ (id)bestLanguageForString:(id)a0 fromAlternatives:(id)a1 currentLanguage:(id)a2;
+ (BOOL)_forgetWord:(id)a0 inDictionary:(id)a1;
+ (void)learnWord:(id)a0;
+ (void)setString:(id)a0 isExemptFromChecker:(BOOL)a1;
+ (BOOL)hasLearnedWord:(id)a0;
+ (BOOL)_learnWord:(id)a0 inDictionary:(id)a1;
+ (id)_wordsInDictionary:(id)a0;
+ (struct __CFSet { } *)createDictHashTable:(BOOL)a0;
+ (id)bestLanguageForString:(id)a0 fromAlternatives:(id)a1 currentLanguage:(id)a2 insertionPointIndex:(unsigned long long)a3 scriptForBestLanguage:(id *)a4;
+ (id)dictionaryInfo:(id)a0;
+ (void)unlearnWord:(id)a0;
+ (BOOL)_isWord:(id)a0 inDictionary:(id)a1;
+ (id)_dictionaryEntryForName:(id)a0;
+ (void)_setWords:(id)a0 inDictionary:(id)a1;

- (long long)adjustOffsetToNextWordBoundaryInString:(id)a0 startingAt:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkGrammarOfString:(id)a0 startingAt:(long long)a1 language:(id)a2 wrap:(BOOL)a3 details:(id *)a4;
- (id)init;
- (id)_nameOfDictionaryForDocumentTag:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkSpellingOfString:(id)a0 startingAt:(long long)a1 language:(id)a2 wrap:(BOOL)a3 correction:(id *)a4;
- (void)initGlobals;
- (BOOL)_doneLoading;
- (void)dealloc;
- (BOOL)isWordInUserDictionaries:(id)a0 caseSensitive:(BOOL)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfMisspelledWordInString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 startingAt:(long long)a2 wrap:(BOOL)a3 language:(id)a4;
- (void)resetAllLanguageModels;
- (BOOL)canChangeCaseOfFirstLetterInString:(id)a0 toUpperCase:(BOOL)a1 language:(id)a2;
- (id)suggestWordInLanguage:(id)a0;
- (id)guessesForWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (id)alternativesForPinyinInputString:(id)a0;
- (id)_checker;
- (id)correctionForWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_chunkAndCheckGrammarInString:(id)a0 language:(id)a1 usingChecker:(id)a2 details:(id *)a3;
- (id)completionsForPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 inString:(id)a1 language:(id)a2;
- (void)_setLanguageDictionaryName:(id)a0;
- (void)_setDocumentDictionaryName:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfMisspelledWordInString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 startingAt:(long long)a2 wrap:(BOOL)a3 languages:(id)a4;
- (void)ignoreWord:(id)a0;
- (id)_initWithAsynchronousLoading:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_chunkAndFindMisspelledWordInString:(id)a0 languages:(id)a1 learnedDictionaries:(id)a2 wordCount:(long long *)a3 correction:(id *)a4 usingChecker:(id)a5;
- (id)stringForInputString:(id)a0 language:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })checkSpellingOfString:(id)a0 startingAt:(long long)a1 languages:(id)a2 wrap:(BOOL)a3 correction:(id *)a4;
- (void)initUserDictionaries;
- (void)releaseAllLexicons;

@end
