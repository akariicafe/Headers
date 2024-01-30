@class SIRINLUEXTERNALCDMNluResponse, AFVoiceCommandGrammarParsePackage;

@interface AFDictationNLUResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLUEXTERNALCDMNluResponse *nluResponse;
@property (retain, nonatomic) AFVoiceCommandGrammarParsePackage *commandGrammarParsePackage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
