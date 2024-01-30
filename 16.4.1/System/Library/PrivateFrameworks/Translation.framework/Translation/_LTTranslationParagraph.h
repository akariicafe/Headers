@class NSString, NSArray;

@interface _LTTranslationParagraph : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *spans;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 text:(id)a1 spans:(id)a2;
- (id)splitIntoSentences;

@end
