@class NSString, Account;

@interface SwitchProfileIntent : INIntent

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *homeUserId;
@property (nonatomic) long long switchType;
@property (nonatomic, retain) Account *account;
@property (nonatomic, copy) NSString *iCloudAltDSID;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
