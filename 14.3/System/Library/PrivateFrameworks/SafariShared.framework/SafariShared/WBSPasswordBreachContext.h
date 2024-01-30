@class WBSPasswordBreachCryptographicOperations, WBSPasswordBreachStore, WBSPasswordBreachConfiguration;

@interface WBSPasswordBreachContext : NSObject

@property (readonly, nonatomic) WBSPasswordBreachConfiguration *configuration;
@property (readonly, nonatomic) WBSPasswordBreachCryptographicOperations *cryptographicOperations;
@property (readonly, nonatomic) WBSPasswordBreachStore *store;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 store:(id)a1;

@end
