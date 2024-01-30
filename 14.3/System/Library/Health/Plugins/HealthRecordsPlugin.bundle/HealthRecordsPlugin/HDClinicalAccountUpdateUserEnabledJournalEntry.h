@interface HDClinicalAccountUpdateUserEnabledJournalEntry : HDClinicalAccountEntityUpdateJournalEntry

@property (readonly, nonatomic, getter=isUserEnabled) BOOL userEnabled;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUserEnabled:(BOOL)a0 accountIdentifier:(id)a1;

@end
