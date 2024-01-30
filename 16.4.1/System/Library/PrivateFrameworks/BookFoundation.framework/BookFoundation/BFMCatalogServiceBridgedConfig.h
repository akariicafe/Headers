@class NSString, ACAccount;

@interface BFMCatalogServiceBridgedConfig : NSObject

@property (readonly) NSString *clientIdentifier;
@property (readonly) ACAccount *account;

- (id)config;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 account:(id)a1;

@end
