@class NSString, NSArray;

@interface SIRINLULegacyNLContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL dictationPrompt;
@property BOOL strictPrompt;
@property (retain, nonatomic) NSString *previousDomainName;
@property BOOL listenAfterSpeaking;
@property (retain, nonatomic) NSArray *renderedTexts;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictationPrompt:(BOOL)a0 strictPrompt:(BOOL)a1 previousDomainName:(id)a2 listenAfterSpeaking:(BOOL)a3;
- (id)initWithDictationPrompt:(BOOL)a0 strictPrompt:(BOOL)a1 previousDomainName:(id)a2 listenAfterSpeaking:(BOOL)a3 renderedTexts:(id)a4;

@end
