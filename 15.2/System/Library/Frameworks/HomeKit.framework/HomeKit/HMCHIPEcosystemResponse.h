@interface HMCHIPEcosystemResponse : HMCHIPEcosystemMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)responseFromExtensionItem:(id)a0 error:(id *)a1;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)extensionItemRepresentation;

@end
