@class NSString;

@interface FPXPCSanitizer : NSObject

@property (readonly, nonatomic) NSString *providerIdentifier;

+ (id)permittedErrorDomains;

- (id)init;
- (id)initWithProviderDomainIdentifier:(id)a0;
- (void).cxx_destruct;

@end
