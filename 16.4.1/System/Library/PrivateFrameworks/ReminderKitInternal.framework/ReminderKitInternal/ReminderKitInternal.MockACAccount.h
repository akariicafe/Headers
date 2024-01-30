@class NSString, NSArray, NSMutableSet;

@interface ReminderKitInternal.MockACAccount : ACAccount {
    void /* unknown type, empty encoding */ rem_aa_primaryEmailMock;
    void /* unknown type, empty encoding */ rem_aa_altDSIDMock;
    void /* unknown type, empty encoding */ rem_mockChildren;
    void /* unknown type, empty encoding */ rem_enabledDataClasses;
}

@property (nonatomic, readonly) NSString *aa_primaryEmail;
@property (nonatomic, readonly) NSString *aa_altDSID;
@property (nonatomic, readonly) NSArray *childAccounts;
@property (nonatomic, retain) NSMutableSet *enabledDataclasses;

- (BOOL)isEnabledForDataclass:(id)a0;
- (id)initWithAccountType:(id)a0;
- (void)setEnabled:(BOOL)a0 forDataclass:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)childAccountsWithAccountTypeIdentifier:(id)a0;
- (id)initWithManagedAccount:(id)a0;

@end
