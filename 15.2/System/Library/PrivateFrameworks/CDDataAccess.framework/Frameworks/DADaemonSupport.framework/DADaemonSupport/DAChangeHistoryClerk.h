@interface DAChangeHistoryClerk : NSObject

+ (id)clerkWithContactStore:(id)a0;
+ (id)clerkWithAddressBook:(void *)a0;

- (void)unregisterClientWithIdentifier:(id)a0 forContainer:(id)a1;
- (void)registerClientWithIdentifier:(id)a0 forContainer:(id)a1;
- (id)identifiersOfAllRegisterdClients;

@end
