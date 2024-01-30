@class NSString;

@interface FPXPCSanitizer : NSObject

@property (readonly, nonatomic) NSString *providerIdentifier;

+ (id)permittedErrorDomains;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProviderDomainIdentifier:(id)a0;

@end
