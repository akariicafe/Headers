@class NLTagger, NSMutableDictionary, NSNumberFormatter, NSDataDetector;

@interface AXMSemanticTextFactory : NSObject

@property (retain, nonatomic) NLTagger *tagger;
@property (retain, nonatomic) NSMutableDictionary *cachedLexicons;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSMutableDictionary *compiledPatterns;
@property (retain, nonatomic) NSDataDetector *dataDetector;

- (void).cxx_destruct;
- (id)semanticTextForText:(id)a0 withLocale:(id)a1;
- (void)_applyCustomPatterns:(id)a0;
- (void)_applyDataDetectors:(id)a0;
- (void)_applyNaturalLanguageTokens:(id)a0;
- (BOOL)_lexiconExistsForLocale:(id)a0;
- (struct _LXLexicon { } *)_lexiconForLocale:(id)a0;
- (void)_performSemanticAnalysis:(id)a0;
- (id)_preprocessedText:(id)a0;
- (BOOL)_string:(id)a0 containsOnlyCharactersFrom:(id)a1;
- (BOOL)_textExistsInLexicon:(id)a0 withLocale:(id)a1;

@end
