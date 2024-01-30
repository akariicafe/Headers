@interface IPKeywordFeatureExtractor : IPFeatureExtractor

- (id)queue;
- (id)featuresForTextString:(id)a0 inMessageUnit:(id)a1 context:(id)a2;
- (id)matchesForTextString:(id)a0 inMessageUnit:(id)a1 eventType:(id)a2;
- (id)matchesForTextString:(id)a0 inMessageUnit:(id)a1 eventType:(id)a2 keywordType:(unsigned long long)a3;
- (id)_matchingKeywordsForRegex:(id)a0 inText:(id)a1 message:(id)a2 eventType:(id)a3 keywordType:(unsigned long long)a4;

@end
