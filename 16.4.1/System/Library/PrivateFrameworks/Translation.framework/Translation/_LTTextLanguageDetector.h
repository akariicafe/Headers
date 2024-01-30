@class NSArray, NLLanguageRecognizer;

@interface _LTTextLanguageDetector : NSObject {
    NLLanguageRecognizer *_recognizer;
}

@property (copy, nonatomic) NSArray *availableLocales;

- (id)initWithModel:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)detectionForString:(id)a0;
- (id)detectionForStrings:(id)a0;
- (id)detectionForStrings:(id)a0 strategy:(unsigned long long)a1;

@end
