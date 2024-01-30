@class NSString, NSArray;

@interface LNBasePhraseTemplateSubstitution : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *basePhraseTemplate;
@property (readonly, copy, nonatomic) NSArray *parameterSubstitutions;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBasePhraseTemplate:(id)a0 parameterSubstitutions:(id)a1;

@end
