@interface IPSentenceFeatureExtractor : IPFeatureExtractor

- (id)queue;
- (id)featuresForTextString:(id)a0 inMessageUnit:(id)a1 context:(id)a2;
- (unsigned long long)responseKitAnnotationTypeForFeatureDataType:(unsigned long long)a0;
- (id)eventIdentifierForLanguageID:(id)a0;
- (id)featureSentencesFromText:(id)a0 dataDetectedFeatures:(id)a1 languageID:(id)a2;
- (void)identifyAndStorePolarityInFeatureSentences:(id)a0 eventIdentifier:(id)a1 previousFeatureSentences:(id)a2;

@end
