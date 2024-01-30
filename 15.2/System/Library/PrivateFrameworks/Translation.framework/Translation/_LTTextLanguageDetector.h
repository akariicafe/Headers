@class NSArray, NLLanguageRecognizer;

@interface _LTTextLanguageDetector : NSObject {
    NLLanguageRecognizer *_recognizer;
}

@property (copy, nonatomic) NSArray *availableLocales;

- (void).cxx_destruct;
- (id)init;
- (id)initWithModel:(unsigned long long)a0;
- (id)detectionForString:(id)a0;
- (id)detectionForStrings:(id)a0;

@end
