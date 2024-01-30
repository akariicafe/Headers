@interface SGPOSTagger : NSObject

+ (id)sharedInstance;

- (id)tokenizeTextContent:(id)a0 languageHint:(id)a1;
- (id)tokenizeTextContent:(id)a0 languageHint:(id)a1 gazetteer:(id)a2;

@end
