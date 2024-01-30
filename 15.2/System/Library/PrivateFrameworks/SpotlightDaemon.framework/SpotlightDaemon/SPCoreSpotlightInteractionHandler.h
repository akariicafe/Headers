@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;

- (id)interestingContactIdentifiersFromIntent:(id)a0;
- (id)attributeForIntent:(id)a0 direction:(long long)a1;
- (void).cxx_destruct;
- (void)handleInteraction:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;

@end
