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

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)commandRecognizer;
- (void)setCommandRecognizer:(id)a0;
- (id)_uniqueCustomCommandIdentifier;
- (id)_initWithSpokenCommand:(id)a0;
- (void)_replaceBuiltInIdentiferNodesWithSubTreesInMutableLM:(id)a0;
- (id)languageModelTree;
- (id)initWithStrings:(id)a0;
- (id)fstGrammar;

@end
