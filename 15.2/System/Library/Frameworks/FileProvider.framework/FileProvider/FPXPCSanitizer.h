@class NSString;

@interface FPXPCSanitizer : NSObject

@property (readonly, nonatomic) NSString *providerIdentifier;

+ (id)permittedErrorDomains;

- (id)initWithProviderDomainIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
