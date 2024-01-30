@class NSUUID;

@interface HDClinicalAccountManagerDeleteAccountBySyncIdentifierJournalEntry : HDJournalEntry

@property (readonly, copy, nonatomic) NSUUID *accountSyncIdentifier;

+ (BOOL)supportsSecureCoding;
+ (void)applyEntries:(id)a0 withProfile:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccountSyncIdentifier:(id)a0;

@end
