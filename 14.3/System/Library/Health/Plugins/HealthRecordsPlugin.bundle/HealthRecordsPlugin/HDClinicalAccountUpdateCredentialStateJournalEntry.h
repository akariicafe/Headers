@interface HDClinicalAccountUpdateCredentialStateJournalEntry : HDClinicalAccountEntityUpdateJournalEntry

@property (readonly, nonatomic) long long credentialState;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCredentialState:(long long)a0 accountIdentifier:(id)a1;

@end
