@class NSString, NSLocale;

@interface _NSLexiconMorphunDictionary : NSObject {
    NSLocale *_appropriateLocale;
    struct MANAConfigurableAnalyzer { } *_analyzer;
    struct MTokenizer { } *_tokenizer;
    const struct MDDictionaryMetaData { } *_dictionary;
}

@property (readonly, copy, nonatomic) NSString *languageCode;

- (void)dealloc;
- (id)initWithLanguage:(id)a0;
- (void)_iterateFormsOfWord:(id)a0 usingBlock:(id /* block */)a1;
- (id)_appropriateCustomEnglishPronounFromPronouns:(id)a0;
- (void)_iterateAllPossibleWordAttributesForWord:(id)a0 usingBlock:(id /* block */)a1;
- (id)_replaceLegacyEnglishPronouns:(id)a0 inSourceStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 lengthLens:(id /* block */)a2 substringInRangeLens:(id /* block */)a3 enumerateWordSubstringsInRangeLens:(id /* block */)a4 attributes:(struct { long long x0; long long x1; long long x2; long long x3; unsigned long long x4; long long x5; long long x6; long long x7; long long x8; long long x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; long long x17; long long x18; BOOL x19; BOOL x20; BOOL x21; })a5 pronouns:(id)a6;
- (id)allPossibleWordAttributesForWord:(id)a0;

@end
