@class NSString, NSDictionary, NSArray, NSMutableDictionary, SRCSCommandRecognizer;

@interface SRCSSpokenCommand : NSObject <NSCopying> {
    NSArray *_strings;
    NSMutableDictionary *_languageModelTree;
    id _fstGrammar;
    SRCSCommandRecognizer *_commandRecognizer;
}

@property (readonly) NSString *identifier;
@property (retain) NSDictionary *recognizedParameters;
@property (readonly) NSArray *strings;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStrings:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)commandRecognizer;
- (void)setCommandRecognizer:(id)a0;
- (id)_initWithSpokenCommand:(id)a0;
- (id)_uniqueCustomCommandIdentifier;
- (void)_replaceBuiltInIdentiferNodesWithSubTreesInMutableLM:(id)a0;
- (id)languageModelTree;
- (id)fstGrammar;

@end
