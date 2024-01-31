@class NSString, PRSPosterConfigurationAttributes;

@interface CNPRSPosterConfigurationAttributes : NSObject

@property (readonly, copy, nonatomic) PRSPosterConfigurationAttributes *wrappedPosterAttributes;
@property (readonly, nonatomic) NSString *extensionIdentifier;

- (void).cxx_destruct;
- (id)initWithCNConfiguration:(id)a0;

@end
