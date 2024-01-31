@class NSString, NSSet;

@interface ACDMockManagedDataclass : ACDManagedDataclass {
    NSString *name;
    NSSet *provisionedAccounts;
    NSSet *syncableTypes;
    NSSet *supportedTypes;
    NSSet *enabledAccounts;
}

- (id)enabledAccounts;
- (void)setName:(id)a0;
- (id)supportedTypes;
- (void).cxx_destruct;
- (id)name;
- (void)setSupportedTypes:(id)a0;
- (id)provisionedAccounts;
- (void)setEnabledAccounts:(id)a0;
- (void)setProvisionedAccounts:(id)a0;
- (void)setSyncableTypes:(id)a0;
- (id)syncableTypes;

@end
