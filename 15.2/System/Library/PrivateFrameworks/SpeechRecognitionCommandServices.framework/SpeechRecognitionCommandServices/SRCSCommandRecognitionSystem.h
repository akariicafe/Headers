@class NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface SRCSCommandRecognitionSystem : NSObject {
    NSMutableDictionary *_resolvedBuiltInIdentifiers;
}

@property (readonly, nonatomic) NSArray *targetTypes;
@property (readonly, retain) NSString *localeIdentifier;
@property (readonly, retain) NSMutableArray *recognizers;

- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)languageModelTreeForBuiltInLMIdentifier:(id)a0;
- (void)_initalizeLanguageModelTree;
- (id)spokenCommandFromRecognizedAFSpeechPhrases:(id)a0;
- (void)addRecognizer:(id)a0;
- (id)spokenCommandFromRecognizedEARTokenSausage:(struct __CFArray { } *)a0;
- (void)_testWithPhrases:(id)a0;

@end
