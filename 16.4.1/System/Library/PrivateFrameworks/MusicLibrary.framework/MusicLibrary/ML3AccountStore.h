@class NSString, ACAccount;

@interface ML3AccountStore : NSObject <_MSVAccountInformationProviding>

@property (class, readonly, nonatomic) ML3AccountStore *defaultStore;

@property (readonly, nonatomic) ACAccount *activeAccount;
@property (readonly, copy, nonatomic) NSString *accountDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_init;
- (id)_accountsWithAccountTypeIdentifier:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)altDSIDForAccountWithDSID:(long long)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
