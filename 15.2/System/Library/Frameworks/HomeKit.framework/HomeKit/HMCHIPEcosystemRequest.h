@class NSError;

@interface HMCHIPEcosystemRequest : HMCHIPEcosystemMessage <NSSecureCoding>

@property (class, readonly, nonatomic) NSError *unknownRequestError;
@property (class, readonly) BOOL supportsSecureCoding;

+ (id)requestFromExtensionItem:(id)a0 error:(id *)a1;

- (id)init;
- (id)initWithCoder:(id)a0;
- (id)extensionItemRepresentation;

@end
