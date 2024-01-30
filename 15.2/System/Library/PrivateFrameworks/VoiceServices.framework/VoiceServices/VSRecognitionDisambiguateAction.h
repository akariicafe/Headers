@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {
    NSString *_repeatedSpokenFeedbackString;
    NSString *_sequenceTag;
    NSMutableDictionary *_knownValues;
    NSMutableDictionary *_knownPhoneticValues;
    NSMutableDictionary *_ambiguousValues;
    NSMutableDictionary *_ambiguousPhoneticValues;
    void *_context;
}

- (id)_keywords;
- (void)dealloc;
- (void)setKeywords:(id)a0;
- (int)completionType;
- (BOOL)_keywordIndexChanged;
- (struct __VSRecognitionDisambiguationContext { } *)_disambiguationContext;
- (void)setRepeatedSpokenFeedbackString:(id)a0;
- (id)repeatedSpokenFeedbackString;
- (id)sequenceTag;
- (void)setSequenceTag:(id)a0;
- (id)knownValueForClassIdentifier:(id)a0;
- (void)setKnownValue:(id)a0 phoneticValue:(id)a1 forClassIdentifier:(id)a2;
- (id)knownValuesForClassIdentifier:(id)a0;
- (void)setKnownValues:(id)a0 phoneticValues:(id)a1 forClassIdentifier:(id)a2;
- (id)ambiguousValuesForClassIdentifier:(id)a0;
- (void)setAmbiguousValues:(id)a0 phoneticValues:(id)a1 forClassIdentifier:(id)a2;
- (struct __VSRecognition { } *)_createRecognitionInstanceWithCallbacks:(struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; } *)a0 info:(void *)a1;
- (id)_actionForEmptyResults;

@end
