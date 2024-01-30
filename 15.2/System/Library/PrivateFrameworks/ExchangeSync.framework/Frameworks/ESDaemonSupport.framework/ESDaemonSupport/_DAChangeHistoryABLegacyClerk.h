@interface _DAChangeHistoryABLegacyClerk : DAChangeHistoryClerk

@property (readonly, nonatomic) void *addressBook;

- (id)initWithAddressBook:(void *)a0;
- (void)dealloc;
- (void)unregisterClientWithIdentifier:(id)a0 forContainer:(id)a1;
- (void)registerClientWithIdentifier:(id)a0 forContainer:(id)a1;
- (id)identifiersOfAllRegisterdClients;

@end
