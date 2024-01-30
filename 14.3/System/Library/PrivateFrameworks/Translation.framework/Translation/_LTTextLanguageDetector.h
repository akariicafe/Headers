@class NSArray, NLLanguageRecognizer;

@interface _LTTextLanguageDetector : NSObject {
    NLLanguageRecognizer *_recognizer;
}

@property (copy, nonatomic) NSArray *availableLocales;

- (id)detectionForString:(id)a0;
- (id)detectionForStrings:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
