@class NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface SRCSCommandRecognitionSystem : NSObject {
    NSMutableDictionary *_resolvedBuiltInIdentifiers;
}

@property (readonly, nonatomic) NSArray *targetTypes;
@property (readonly, retain) NSString *localeIdentifier;
@property (readonly, retain) NSMutableArray *recognizers;

- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)spokenCommandFromRecognizedAFSpeechPhrases:(id)a0;
- (void)_initalizeLanguageModelTree;
- (void)_testWithPhrases:(id)a0;
- (void)addRecognizer:(id)a0;
- (id)languageModelTreeForBuiltInLMIdentifier:(id)a0;
- (id)spokenCommandFromRecognizedEARTokenSausage:(struct __CFArray { } *)a0;

@end
