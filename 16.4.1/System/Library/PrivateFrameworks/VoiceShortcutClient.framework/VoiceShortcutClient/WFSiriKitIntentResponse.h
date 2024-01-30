@class INInteraction;

@interface WFSiriKitIntentResponse : WFSiriActionResponse

@property (readonly, nonatomic) INInteraction *interaction;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInteraction:(id)a0 andError:(id)a1;

@end
