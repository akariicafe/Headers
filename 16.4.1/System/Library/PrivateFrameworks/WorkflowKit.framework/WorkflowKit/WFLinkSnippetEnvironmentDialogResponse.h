@class LNSnippetEnvironment;

@interface WFLinkSnippetEnvironmentDialogResponse : WFDialogResponse

@property (readonly, copy, nonatomic) LNSnippetEnvironment *environment;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCancelled:(BOOL)a0;

@end
