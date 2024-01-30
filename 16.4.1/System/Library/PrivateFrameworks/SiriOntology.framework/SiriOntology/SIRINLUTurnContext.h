@class SIRINLUNLContext, SIRINLULegacyNLContext;

@interface SIRINLUTurnContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SIRINLUNLContext *nlContext;
@property (retain, nonatomic) SIRINLULegacyNLContext *legacyNLContext;
@property (retain, nonatomic) SIRINLUNLContext *nlContextNullable;
@property (retain, nonatomic) SIRINLULegacyNLContext *legacyNLContextNullable;

+ (id)createEmptyPlaceholderNLContext;
+ (id)createEmptyPlaceholderLegacyNLContext;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithNLContext:(id)a0 legacyNLContext:(id)a1;
- (id)initWithLegacyNLContext:(id)a0;
- (id)initWithNLContext:(id)a0;

@end
