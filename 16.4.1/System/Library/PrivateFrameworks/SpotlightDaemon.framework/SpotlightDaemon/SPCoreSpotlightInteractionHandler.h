@class CNContactStore;

@interface SPCoreSpotlightInteractionHandler : NSObject

@property (retain, nonatomic) CNContactStore *contactStore;

- (id)attributeForIntent:(id)a0 direction:(long long)a1;
- (id)interestingContactIdentifiersFromIntent:(id)a0;
- (void)handleInteraction:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void).cxx_destruct;

@end
