@class NSString;

@interface CMDPGrammarData : NSObject

@property (readonly) NSString *commandIdentifier;
@property (readonly) NSString *builtInLMIdentifier;
@property (readonly) NSString *word;

- (void).cxx_destruct;
- (id)initWithGrammarDataWord:(id)a0 lmIdentifer:(id)a1 commandIdentifier:(id)a2;

@end
